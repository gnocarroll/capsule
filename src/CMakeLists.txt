target_sources(cap PUBLIC
	main.cpp
)


target_include_directories(cap PRIVATE
	ast
)

add_subdirectory(ast)

target_include_directories(cap PRIVATE
	parse
)

add_subdirectory(parse)

