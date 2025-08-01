from dataclasses import dataclass


@dataclass
class Program:
    definitions: list["Definition"]


@dataclass
class Definition:
    definition: "TypeDefinition | FunctionDefinition"


@dataclass
class TypeDefinition:
    pass


@dataclass
class FunctionDefinition:
    pass