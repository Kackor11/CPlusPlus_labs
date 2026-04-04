#include <iostream>
#include <string>

int main() {

    int liczba_prob{1};
    std::string haslo{"cpp123"};
    std::string passw_input{};

    std::cout << "Witaj uzytkowniku!, podaj haslo: ";
    std::cin >> passw_input;

    while (std::cin.fail() || passw_input != haslo) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        liczba_prob = liczba_prob + 1;
        std::cout << "Podano niepoprawne haslo, sprobuj ponownie" << std::endl;
        std::cout << "Podaj haslo: ";
        std::cin >> passw_input;
    }

    std::cout << "Dostep przyznany." << std::endl;
    std::cout << "Liczba wymaganych prob aby uzyskac dostep: " << liczba_prob << std::endl;

    return 0;
}