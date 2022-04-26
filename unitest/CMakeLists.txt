cmake_minimum_required(VERSION 3.5)

# set(CMAKE_INCLUDE_CURRENT_DIR ON)

# set(CMAKE_AUTOUIC ON)
# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(test)

set(INCLUDE_DIRS
	"."
	"../Calc/lib"
	"."
	)
include_directories(${INCLUDE_DIRS})

# set(LINK_DIR
# 	"./lib"
# )
# link_directories(${LINK_DIR})
add_subdirectory("../Calc/lib" Calc)
set(SOURCES
        main.cpp
)

set(HEADERS
	./TCalcTest.h
	./TEngCalcTest.h
	./ITest.h
    )

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_link_libraries(${PROJECT_NAME} Calc)
