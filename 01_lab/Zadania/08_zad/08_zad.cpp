#include <iostream>
#include <string>

int main() {
    std::string word{};

    std::cout << "Podaj dowolne slow: ";
    std::cin >> word;

    while (std::cin.fail() || word.length() == 0) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "Wprowadzono bledne dane, sprobuj jeszcze raz" << std::endl;
        std::cout << "Podaj dowolne slowo: ";
        std::cin >> word;
    }

    char first_char{};
    char last_char{};

    first_char = word[0];
    last_char = word[word.length() - 1];

    std::cout << "Pierwsza litera podanego slowa: " << first_char << std::endl;
    std::cout << "Ostatnia litera podanego slowa: " << last_char << std::endl;

    return 0;
}