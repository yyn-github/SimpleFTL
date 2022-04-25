cmake_minimum_required(VERSION 3.10)

project(SimpleFTL)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRC_FILE "${CMAKE_SOURCE_DIR}/src/*.cpp")
file(GLOB HAD_FILE "${CMAKE_SOURCE_DIR}/src/*.h")

list(APPEND SRC_FILE 
	${cmake_source_dir}/third_part/inifile/inifile.cpp
)

list(APPEND HAD_FILE 
	${cmake_source_dir}/third_part/inifile/inifile.h
)

target_include_directories(entry
PUBLIC
	${CMAKE_SOURCE_DIR}/third_part
)


add_executable(client
	${SRC_FILE}
	${HAD_FILE}
)