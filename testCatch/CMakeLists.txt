cmake_minimum_required (VERSION 3.0)

set(INCLUDE_DIRS
	"."
	"../Calc/lib"
	)
include_directories(${INCLUDE_DIRS})

set(HEADERS
	./Calc/lib/TCalc.h
	./Calc/lib/TEngCalc.h
    )

add_subdirectory("../Calc/lib" Calc)

find_package(Catch2 3 REQUIRED)
# These tests can use the Catch2-provided main
add_executable(testsCalc test.cpp testEng.cpp)
target_link_libraries(testsCalc PRIVATE Calc Catch2::Catch2WithMain)
