#include <iostream>
#include <string>

using namespace std;

int main() {
    int n{};
    int suma{};

    cout << "Podaj liczbe calkowita: ";
    cin >> n;

    while (cin.fail()) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "Wpisano niepoprawny input, sprobuj jeszcze raz" << endl;

        cout << "Podaj liczbe calkowita: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    cout << "Suma liczb od 1 do " << n << " = " << suma << endl;
    return 0;
}