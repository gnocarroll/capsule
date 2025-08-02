add_executable(cap
	main.cpp
)

set(SUBDIRS "ast" "parse")

foreach(SUBDIR IN LISTS SUBDIRS)
	target_include_directories(cap PRIVATE
		${SUBDIR}
	)

	add_subdirectory(${SUBDIR})
endforeach()
