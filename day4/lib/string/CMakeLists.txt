add_library(string STATIC
    src/reverse.cpp
)

target_include_directories(string PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)