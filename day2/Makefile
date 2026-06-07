# CXX：指定编译器
CXX = g++
# CXXFLAGS：编译选项集合（头文件路径 + 开启警告 + C++17标准）
CXXFLAGS = -Wall -Wextra -std=c++17 -I include
# TARGET：最终产出叫什么名字
TARGET = math_app
# SRCS：项目里所有 .cpp 源文件
SRCS = src/main.cpp src/math_utils.cpp
# OBJS：把 .cpp 后缀自动替换成 .o——生成 "src/main.o src/math_utils.o"
OBJS = $(SRCS:.cpp=.o)

# 第一条规则：make 默认跑这个
# 意思是"要产出 $(TARGET)，得先有 $(OBJS)；有了之后执行下面这行命令"
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 模式规则：任何一个 .o 文件，依赖同名 .cpp
# $<：第一个依赖（即那个 .cpp）
# $@：目标本身（即那个 .o）
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# 清理规则：删掉所有编译产物
clean:
	rm -f $(OBJS) $(TARGET)

# 告诉 make：clean 不是文件名，是个伪命令
.PHONY: clean