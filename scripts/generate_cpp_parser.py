import os
from pathlib import Path
from subprocess import run


ANTLR_EXE = ["java", "org.antlr.v4.Tool"]
GRAMMAR_NAME = "Capsule.g4"

SCRIPTS_DIR = Path(__file__).parent
PROJECT_DIR = SCRIPTS_DIR.parent

ANTLR_DIR = os.path.join(str(PROJECT_DIR), "antlr")
PARSE_DIR = os.path.join(str(PROJECT_DIR), "src", "parse")


def ls_endswidth(dir_path: str, *exts: str) -> list[str]:
    return [
        path for path in os.listdir(dir_path)
            if any([path.endswith(ext) for ext in exts])
    ]


def main():
    os.chdir(ANTLR_DIR)

    run([*ANTLR_EXE, GRAMMAR_NAME], check=True)
    
    run([
        "javac",
        *ls_endswidth(ANTLR_DIR, ".java"),
    ], check=True)

    os.chdir(PARSE_DIR)

    run([
        *ANTLR_EXE,
        "-Dlanguage=Cpp",
        os.path.join(ANTLR_DIR, GRAMMAR_NAME),
        "-visitor",
        "-listener",
        "-o", PARSE_DIR,
    ], check=True)

    run([
        "python",
        os.path.join(SCRIPTS_DIR, "correct_antlr_include.py"),
        *ls_endswidth(PARSE_DIR, ".h", ".cpp"),
    ], check=True)


if __name__ == "__main__":
    main()
