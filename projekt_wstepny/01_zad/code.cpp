#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>

int cube_root(int x) {

    int abs_x{std::abs(x)};
    
    int left{1};
    int right{abs_x};
    int curr{(right + left) / 2};

    if (abs_x == 1 || abs_x == 0)
    {
        return 1;
    }
    

    while (left < right)
    {
        int64_t p = static_cast<int64_t>(curr) * curr * curr;
        
        if ((right - left) == 1) {
            return 0;
        }

        if (p == abs_x) {
            return 1;
        }

        if (p > abs_x) {
            right = curr;
            curr = (right + left) / 2;
        } else {
            left = curr;
            curr = (right + left) / 2;
        }
    }

    return 0;
}

int main() {

    std::vector<int> numbers {8, 27, -1331, 654, 9843, 0, 1, 2};

    for (int i = 0; i < numbers.size(); i++) {
        int check{cube_root(numbers.at(i))};

        if (check == 1)
        {
            std::cout << numbers.at(i) << ": 1" << std::endl;
        } else
        {
            std::cout << numbers.at(i) << ": 0" << std::endl;
        }
    }
    return 0;
}
