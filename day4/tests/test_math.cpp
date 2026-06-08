#include "math/add.h"
#include <cassert>
#include <iostream>

int main() {
    // 用 assert 做最简单的测试——条件不成立就崩溃
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(multiply(3, 4) == 12);
    assert(multiply(0, 5) == 0);

    std::cout << "All math tests passed!" << std::endl;
    return 0;
}