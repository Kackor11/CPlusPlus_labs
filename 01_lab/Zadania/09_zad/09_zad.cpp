#include <iostream>
#include <string>

using namespace std;

int main() {
    string napis{};

    cout << "Podaj dowolne slow: " << endl;
    cin >> napis;

    while (cin.fail())
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << "Wprowadzono niepoprawny napis, sprobuj ponownie" << endl;
        cout << "Podaj dowolne slowo: " << endl;
        cin >> napis;
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
        cout << "Podane slowo " << napis << " jest palindromem" << endl;
    } else
    {
        cout << "Podane slowo " << napis << " nie jest palindromem" << endl;
    }
    
    return 0;
}