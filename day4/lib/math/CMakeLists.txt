# 把这个目录的源文件编译成静态库 math
add_library(math STATIC
    src/add.cpp
)

# PUBLIC：任何链接 math 库的目标，自动获得这个头文件路径
target_include_directories(math PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)