#include <iostream>
#include <string>

using namespace std;

int main() {
    string napis{};
    string odwrocony_napis{};

    cout << "Podaj dowolne slowo: ";
    cin >> napis;

    
    for (int i = 0; i < napis.length(); i++)
    {
        odwrocony_napis += napis[napis.length() - 1 - i];
        cout << odwrocony_napis << endl;
    }
    
    if (odwrocony_napis == napis)
    {
        cout << "Podany napis jest palindromem" << endl;
    } else
    {
        cout << "Podany napis nie jest palindromem" << endl;
    }

    return 0;
}