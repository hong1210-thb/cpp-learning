#include <iostream>
#include <vector>
#include "math_utils.h"

// 计算数组里所有正数的平均值
double average_of_positives(const std::vector<int>& numbers) {
    int sum = 0;
    int count = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] > 0) {
            sum += numbers[i];
            count++;
        }
    }
    return static_cast<double>(sum) / count;
}

int main() {
    std::vector<int> data = {1, -2, 3, -4, 5};

    std::cout << "3 + 4 = " << add(3, 4) << std::endl;
    std::cout << "3 * 4 = " << multiply(3, 4) << std::endl;

    double avg = average_of_positives(data);
    std::cout << "Average of positives: " << avg << std::endl;

    return 0;
}

