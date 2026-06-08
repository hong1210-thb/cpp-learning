cmake_minimum_required(VERSION 3.10)

project(MathApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra)

# ---------------------------------------------------
# 库：把 math_utils 编译成静态库
# ---------------------------------------------------
# add_library(库名 STATIC 源文件...)：生成一个 .a 静态库文件
# STATIC = 静态库，链接时会把库的代码直接嵌入到可执行文件里
add_library(math_utils STATIC
    src/math_utils.cpp
)

# target_include_directories：现代 CMake 推荐做法，而不是 include_directories
# PUBLIC 表示"使用这个库的人也需要这个头文件路径"
target_include_directories(math_utils PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# ---------------------------------------------------
# 可执行文件
# ---------------------------------------------------
add_executable(math_app
    src/main.cpp
)

# target_link_libraries：告诉 CMake"math_app 需要链接 math_utils 库"
# 顺便 math_utils 的 PUBLIC 头文件路径也会传给 math_app
target_link_libraries(math_app PRIVATE math_utils)