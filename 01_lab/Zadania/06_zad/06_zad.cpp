#include <iostream>
#include <string>

using namespace std;

int main() {

    string haslo{"cpp123"};
    string passw_input{};

    cout << "Witaj uzytkowniku!, podaj haslo: ";
    cin >> passw_input;

    while (cin.fail() || passw_input != haslo) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "Podano niepoprawne haslo, sprobuj ponownie" << endl;
        cout << "Podaj haslo: ";
        cin >> passw_input;
    }

    cout << "Dostep przyznany." << endl;

    return 0;
}