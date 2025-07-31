from typing import NamedTuple, Optional


from ..scanner import (
    Token,
    TokenType,
)


class Terminal(NamedTuple):
    expected: TokenType
    token: Optional[Token] = None