import argparse
from dataclasses import dataclass, field
from enum import auto, Enum
from typing import Generator
from typing import NamedTuple
import re
import sys


class TokenType(Enum):
    WORD = auto()
    INTEGER = auto()
    FLOAT = auto()
    PLUS = auto()
    MINUS = auto()
    STAR = auto()
    F_SLASH = auto()
    PERCENT = auto()
    STAR_STAR = auto()
    ERR = auto()
    WSPACE = auto()
    NEWLINE = auto()
    BSLASH_NEWLINE = auto()
    FUNCTION = auto()
    L_PAREN = auto()
    R_PAREN = auto()
    S_ARROW = auto()
    D_ARROW = auto()
    GT = auto()
    LT = auto()
    GE = auto()
    LE = auto()
    END = auto()
    IF = auto()
    WHILE = auto()

@dataclass
class TokenSpec:
    type: TokenType
    regex: str
    is_keyword: bool = False
    ignore: bool = False
    comp_regex: re.Pattern = field(init=False)

    def __post_init__(self):
        self.comp_regex = re.compile(self.regex)


TOKEN_SPECS = [
    TokenSpec(TokenType.WSPACE, "[ \t\r\f\v]+", ignore=True),
    TokenSpec(TokenType.WORD, r"[_A-Za-z][_A-Za-z0-9]*"),
    TokenSpec(TokenType.INTEGER, r"\d+"),
    TokenSpec(TokenType.FLOAT, r"\d+\.\d*(?:[Ee]\-?\d+)"),
    TokenSpec(TokenType.S_ARROW, r"\->"),
    TokenSpec(TokenType.D_ARROW, r"=>"),
    TokenSpec(TokenType.PLUS, r"\+"),
    TokenSpec(TokenType.MINUS, r"\-"),
    TokenSpec(TokenType.STAR, r"\*"),
    TokenSpec(TokenType.F_SLASH, r"\/"),
    TokenSpec(TokenType.PERCENT, r"%"),
    TokenSpec(TokenType.STAR_STAR, r"\*\*"),
    TokenSpec(TokenType.NEWLINE, r"\n"),
    TokenSpec(TokenType.BSLASH_NEWLINE, r"\\[ \t\r\f\v]*\n", ignore=True),
    TokenSpec(TokenType.FUNCTION, r"function", True),
    TokenSpec(TokenType.L_PAREN, r"\("),
    TokenSpec(TokenType.R_PAREN, r"\)"),
    TokenSpec(TokenType.GT, r">"),
    TokenSpec(TokenType.LT, r"<"),
    TokenSpec(TokenType.GE, r">="),
    TokenSpec(TokenType.LE, r"<="),
    TokenSpec(TokenType.IF, "if", True),
    TokenSpec(TokenType.END, "end", True),
    TokenSpec(TokenType.WHILE, "while", True),

    TokenSpec(TokenType.ERR, r"."),
]

TOKEN_SPEC_MAP = {
    spec.type: spec for spec in TOKEN_SPECS
}

KEYWORDS_MAP = {
    spec.regex: spec.type for spec in TOKEN_SPECS if spec.is_keyword
}

TOKEN_REGEX_STR =  "|".join(
    f"(?P<{spec.type.name}>{spec.regex})" for spec in TOKEN_SPECS
)

TOKEN_REGEX = re.compile(TOKEN_REGEX_STR)


class Token(NamedTuple):
    ttype: TokenType
    text: str
    line: int
    column: int


def tokenize(code: str) -> Generator[Token]:
    line_num = 1
    line_start = 0
    
    for mo in re.finditer(TOKEN_REGEX, code):
        ttype_str = mo.lastgroup

        if ttype_str is None:
            raise RuntimeError("failed to find matching token type (should be impossible)")

        ttype = TokenType[ttype_str]

        if ttype == TokenType.WORD and ttype_str in KEYWORDS_MAP:
            ttype = KEYWORDS_MAP[ttype_str]

        # ignore certain token types
        if TOKEN_SPEC_MAP[ttype].ignore:
            continue

        text = mo.group()
        column = mo.start() - line_start
        
        if ttype == TokenType.NEWLINE:
            line_start = mo.end()
            line_num += 1
        elif ttype == TokenType.ERR:
            raise RuntimeError(f'line {line_num}, col {column}: \"{text}\" unexpected')
        
        yield Token(ttype, text, line_num, column)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    
    arg_name = "filename"
    
    parser.add_argument(arg_name)

    args = vars(parser.parse_args())

    fname = args[arg_name]

    try:
        with open(fname, "r") as f:
            for t in tokenize(f.read()):
                print(t)
    except OSError:
        sys.exit(f"Failed to read from")