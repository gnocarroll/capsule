import argparse


ARG_NAME = "filename"


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument(ARG_NAME, nargs="+")

    filenames = vars(parser.parse_args())[ARG_NAME]

    for path in filenames:
        correct_includes(path)


def correct_includes(path: str):
    text = None

    with open(path, "r") as f:
        text = correct_f(f)

    with open(path, "w") as f:
        f.write(text)


def correct_f(f):
    return "".join([correct_line(line) for line in f])


def correct_line(line: str) -> str:
    toks = line.split()

    if len(toks) != 2 or toks[0] != "#include" or (
        toks[1] != "\"antlr4-runtime.h\""
    ):
        return line

    toks[1] = "\"antlr4-runtime/antlr4-runtime.h\""

    return " ".join(toks)


if __name__ == "__main__":
    main()
