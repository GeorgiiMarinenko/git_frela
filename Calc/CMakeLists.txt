cmake_minimum_required(VERSION 3.5)

# set(CMAKE_INCLUDE_CURRENT_DIR ON)

# set(CMAKE_AUTOUIC ON)
# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(calculator)

set(INCLUDE_DIRS
	"."
	"./lib"
	)
include_directories(${INCLUDE_DIRS})

# set(LINK_DIR
# 	"./lib"
# )
# link_directories(${LINK_DIR})
add_subdirectory("./lib" Calc)
set(SOURCES
        main.cpp
)

set(HEADERS
	./lib/TCalc.h
	./lib/TEngCalc.h
    )

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_link_libraries(${PROJECT_NAME} Calc)
