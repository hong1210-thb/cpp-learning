cmake_minimum_required(VERSION 3.10)
project(Day4Project VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra)

# 把 lib 目录纳入构建（递归处理 lib/math 和 lib/string）
add_subdirectory(lib)

# 主程序
add_executable(day4_app src/main.cpp)
target_link_libraries(day4_app PRIVATE math string)

# 测试
add_subdirectory(tests)