#include <iostream>
#include <string>

int main() {
    int n{};
    int suma{};

    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> n;

    while (std::cin.fail()) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "Wpisano niepoprawny input, sprobuj jeszcze raz" << std::endl;

        std::cout << "Podaj liczbe calkowita: ";
        std::cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    std::cout << "Suma liczb od 1 do " << n << " = " << suma << std::endl;
    return 0;
}