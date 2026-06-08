# 测试可执行文件
add_executable(test_math test_math.cpp)

# 测试程序也链接 math 库——math 的 PUBLIC 头文件路径自动传过来
target_link_libraries(test_math PRIVATE math)