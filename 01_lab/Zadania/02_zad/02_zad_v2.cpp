#include <iostream>
#include <string>

using namespace std;

int main() {

    string imie{};
    string nazwisko{};

    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;

    cout << "Witaj, " << imie << " " << nazwisko << "!" << endl;

    return 0;
}