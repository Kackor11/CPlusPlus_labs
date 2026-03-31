#include <iostream>
#include <string>

using namespace std;

int main() {

    int liczba{};

    cout << "Podaj liczbe (1-7): ";
    cin >> liczba;

    while (liczba < 1 || liczba > 7 || cin.fail())
    {
        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "Podano nieprawidlowy wybor" << endl;
        cout << "Sprobuj jeszcze raz, wybiercz liczbe (1-7): ";

        cin >> liczba;
    }

    switch (liczba)
    {
    case 1:
        cout << "PONIEDZIALEK (DZIEN ROBOCZY)";
        break;
    case 2:
        cout << "WTOREK (DZIEN ROBOCZY)";
        break;
    case 3:
        cout << "SRODA (DZIEN ROBOCZY)";
        break;
    case 4:
        cout << "CZWARTEK (DZIEN ROBOCZY)";
        break;
    case 5:
        cout << "PIATEK (DZIEN ROBOCZY)";
        break;
    case 6:
        cout << "SOBOTA (DZIEN WEEKENDOWY)";
        break;
    case 7:
        cout << "NIEDZIELA (DZIEN WEEKENDOWY)";
        break;
    default:
        cout << "Wybrano nieprawidlowa opcje";
        break;
    }

    return 0;
}