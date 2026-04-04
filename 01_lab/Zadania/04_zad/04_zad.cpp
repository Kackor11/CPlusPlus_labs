#include <iostream>
#include <string>

int main() {

    int liczba{};

    std::cout << "Podaj liczbe (1-7): ";
    std::cin >> liczba;

    while (liczba < 1 || liczba > 7 || std::cin.fail())
    {
        if (std::cin.fail()) 
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "Podano nieprawidlowy wybor" << std::endl;
        std::cout << "Sprobuj jeszcze raz, wybiercz liczbe (1-7): ";

        std::cin >> liczba;
    }
    
    switch (liczba)
    {
    case 1:
        std::cout << "PONIEDZIALEK";
        break;
    case 2:
        std::cout << "WTOREK";
        break;
    case 3:
        std::cout << "SRODA";
        break;
    case 4:
        std::cout << "CZWARTEK";
        break;
    case 5:
        std::cout << "PIATEK";
        break;
    case 6:
        std::cout << "SOBOTA";
        break;
    case 7:
        std::cout << "NIEDZIELA";
        break;
    default:
        std::cout << "Wybrano nieprawidlowa opcje";
        break;
    }

    return 0;
}