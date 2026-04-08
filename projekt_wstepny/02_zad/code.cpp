#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int is_armstrong_with_terminal_input() {
    int test_number{};

    std::cout << "Please enter a number: ";
    std::cin >> test_number;

    while (std::cin.fail())
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "Invalid input, try again: " << std::endl;
        std::cin >> test_number;
    }
    
    if (test_number < 0)
    {
        return 0;
    }
    
    std::string number_as_string = std::to_string(test_number);

    int number_len{static_cast<int>(number_as_string.length())};
    
    int res{0};

    for (int i = 0; i < number_len; i++)
    {
        int x = number_as_string.at(i) - '0';
        res += std::pow(x, number_len);
    }
    
    if (res == test_number)
    {
        return 1;
    } else
    {
        return 0;
    }
    
    return 0;
}

int check_if_armstrong(int test_number) {
    
    if (test_number < 0)
    {
        return 0;
    }
    
    std::string number_as_string = std::to_string(test_number);

    int number_len{static_cast<int>(number_as_string.length())};
    
    int res{0};

    for (int i = 0; i < number_len; i++)
    {
        int x = number_as_string.at(i) - '0';
        res += std::pow(x, number_len);
    }
    
    if (res == test_number)
    {
        return 1;
    } else
    {
        return 0;
    }
    
    return 0;
}

int my_pow(int num, int size) {
    int state{1};
    int res{num};

    while (state < size)
    {
        res *= num;
        state += 1;
    }

    return res;
}

int check_if_armstrong_v2(int given_number) {
    int test_number = given_number;
    if (test_number < 0)
    {
        return 0;
    }

    int size{0};
    int test_number_copy{test_number};

    while (test_number_copy != 0)
    {
        test_number_copy = test_number_copy / 10;
        size += 1;
    }
    
    int res{0};
    int curr{};

    while (test_number != 0)
    {
        curr = test_number % 10;
        test_number = test_number / 10;
        res += my_pow(curr, size);
    }
    
    return res == given_number;
}

int main() {
    // int my_pow_res = my_pow(5, 3);
    // std::cout << my_pow_res << std::endl;


    int check{};
    bool working{true};
    int curr{0};

    while (working == true)
    {
        check = check_if_armstrong_v2(curr);

        if (check == 1) {
            std::cout << curr << std::endl;
        }

        curr += 1;

        if (curr > 100000000) {
            working = false;
        }
    }
    

    // for (int i = 0; i <= 10000; i++)
    // {
    //     check = check_if_armstrong(i);
    //     if (check == 1)
    //     {
    //         std::cout << i << std::endl;
    //     }
    // }
}
