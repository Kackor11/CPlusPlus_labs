#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int liczba{};   // Zmienna na liczbe calkowita
    
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;  // Wczytanie wartosci przez cin
    
    // Sprawdzanie warunkow 
    if (liczba > 0) {
        cout << "Liczba jest dodatnia." << endl;
    } else if (liczba < 0) {
        cout << "Liczba jest ujemna." << endl;
    } else {
        cout << "Liczba jest rowna zero." << endl;
    }
    
    return 0;
}