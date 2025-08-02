add_executable(cap
	main.cpp
)

target_include_directories(cap PRIVATE
	parse
)

add_subdirectory(parse)