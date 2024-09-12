cmake_minimum_required(VERSION 3.11.0)
project(Trivia VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 14)

add_compile_options(-g -Wall -Wextra -Werror)

add_executable(trivia game.c game_runner.c)

add_subdirectory(googletest)

add_executable(test_trivia test_trivia.cpp game.c)
add_test(test_trivia test_trivia)
target_link_libraries(test_trivia gtest gmock gmock_main)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
