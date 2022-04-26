cmake_minimum_required(VERSION 3.5)
project(Calc)

set(INCLUDE_DIRS
	"."
	)

include_directories(
	${INCLUDE_DIRS}
	)

set(SOURCES
	TCalc.cpp
)

set(HEADERS
	TCalc.h
    )

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})
