#include <iostream>
#include <string>

int main() {
    std::string napis{};

    std::cout << "Podaj dowolne slowo: " << std::endl;
    std::cin >> napis;

    while (std::cin.fail())
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "Wprowadzono niepoprawny napis, sprobuj ponownie" << std::endl;
        std::cout << "Podaj dowolne slowo: " << std::endl;
        std::cin >> napis;
    }

    int rozmiar{};
    int points{};

    rozmiar = napis.length();

    for (int i = 0; i < rozmiar/2; i++)
    {
        if (napis[i] == napis[rozmiar - 1 - i])
        {
            points = points + 1;
        }
    }

    if (points == rozmiar/2)
    {
        std::cout << "Podane slowo " << napis << " jest palindromem" << std::endl;
    } else
    {
        std::cout << "Podane slowo " << napis << " nie jest palindromem" << std::endl;
    }
    
    return 0;
}