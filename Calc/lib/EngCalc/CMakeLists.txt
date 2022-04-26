cmake_minimum_required(VERSION 3.5)
project(TEngCalac)

set(INCLUDE_DIRS
	"."
	)

include_directories(
	${INCLUDE_DIRS}
	)

set(SOURCES
	TEngCalac.cpp
)

set(HEADERS
	TEngCalac.h
    )

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})
