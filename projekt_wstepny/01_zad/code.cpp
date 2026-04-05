#include <iostream>
#include <cmath>

int cube_root(int x) {
    int check{};
    int left{1};
    int right{x};
    int curr{(right + left) / 2};

    if (x == 1)
    {
        return 1;
    }
    

    while (left < right)
    {
        int p{curr * curr * curr};
        
        if ((right - left) == 1) {
            return 0;
        }

        if (p == x) {
            return 1;
        }

        if (p > x) {
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
    int check{cube_root(126)};

    if (check == 1)
    {
        std::cout << "1" << std::endl;
    } else
    {
        std::cout << "0" << std::endl;
    }
    
    

    return 0;
}
