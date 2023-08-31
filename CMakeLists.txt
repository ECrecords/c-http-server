cmake_minimum_required(VERSION 3.0.0)
project(c-http-server VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_executable(c-http-server main.c)


# Add this line to define _POSIX_C_SOURCE for your project
target_compile_definitions(c-http-server PRIVATE _POSIX_C_SOURCE=200112L)

target_link_libraries(${PROJECT_NAME} PRIVATE net) 

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
