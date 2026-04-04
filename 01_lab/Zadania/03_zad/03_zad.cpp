#include <iostream>
#include <string>

int main() {
    int n{};

    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << "Liczba jest dodatnia" << std::endl;
    } else if (n < 0)
    {
        std::cout << "Liczba jest mniejsza od zera" << std::endl;
    } else {
        std::cout << "Liczba jest rowna zeru" << std::endl;
    }

    return 0;
}