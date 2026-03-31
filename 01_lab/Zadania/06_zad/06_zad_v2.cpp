#include <iostream>
#include <string>

using namespace std;

int main() {

    int liczba_prob{1};
    string haslo{"cpp123"};
    string passw_input{};

    cout << "Witaj uzytkowniku!, podaj haslo: ";
    cin >> passw_input;

    while (cin.fail() || passw_input != haslo) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        liczba_prob = liczba_prob + 1;
        cout << "Podano niepoprawne haslo, sprobuj ponownie" << endl;
        cout << "Podaj haslo: ";
        cin >> passw_input;
    }

    cout << "Dostep przyznany." << endl;
    cout << "Liczba wymaganych prob aby uzyskac dostep: " << liczba_prob << endl;

    return 0;
}