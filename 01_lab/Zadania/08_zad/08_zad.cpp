#include <iostream>
#include <string>

using namespace std;

int main() {
    string word{};

    cout << "Podaj dowolne slow: ";
    cin >> word;

    while (cin.fail() || word.length() == 0) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "Wprowadzono bledne dane, sprobuj jeszcze raz" << endl;
        cout << "Podaj dowolne slowo: ";
        cin >> word;
    }

    char first_char{};
    char last_char{};

    first_char = word[0];
    last_char = word[word.length() - 1];

    cout << "Pierwsza litera podanego slowa: " << first_char << endl;
    cout << "Ostatnia litera podanego slowa: " << last_char << endl;

    return 0;
}