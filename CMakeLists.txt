cmake_minimum_required(VERSION 3.17)
project(Game)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf")

file(GLOB_RECURSE GAME "File/*.cpp")
add_executable (Game ${GAME} File/SaveKey.cpp File/SaveKey.h File/User.cpp File/User.h)