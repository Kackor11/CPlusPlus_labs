#include <iostream>
#include <string>

int main() {
    std::string napis{};
    std::string odwrocony_napis{};

    std::cout << "Podaj dowolne slowo: ";
    std::cin >> napis;

    
    for (int i = 0; i < napis.length(); i++)
    {
        odwrocony_napis += napis[napis.length() - 1 - i];
        std::cout << odwrocony_napis << std::endl;
    }
    
    if (odwrocony_napis == napis)
    {
        std::cout << "Podany napis jest palindromem" << std::endl;
    } else
    {
        std::cout << "Podany napis nie jest palindromem" << std::endl;
    }

    return 0;
}