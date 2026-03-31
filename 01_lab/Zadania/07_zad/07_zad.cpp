#include <iostream>
#include <string>

using namespace std;

int main() {
    string napis{};

    cout << "Podaj dowolny napis: ";
    cin >> napis;

    while (cin.fail()) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "Podano niepoprawne dane..." << endl;
        cout << "Sprobuj jeszcze raz: ";
        cin >> napis;
    }

    int dlugosc_napisu{};
    dlugosc_napisu = napis.length();

    cout << "Dlugosc napisu " << napis << " = " << dlugosc_napisu;

    return 0;
}