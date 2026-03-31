#include <iostream> // [cite: 33]

using std::cin;     // [cite: 37]
using std::cout;    // [cite: 38]
using std::endl;    // [cite: 39]

int main()          // [cite: 41]
{
    int liczba{};   // Zmienna na liczbe calkowita [cite: 74, 75]
    
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;  // Wczytanie wartosci przez cin [cite: 76]
    
    // Sprawdzanie warunkow 
    if (liczba > 0) {
        cout << "Liczba jest dodatnia." << endl; // [cite: 70]
    } else if (liczba < 0) {
        cout << "Liczba jest ujemna." << endl;   // [cite: 71]
    } else {
        cout << "Liczba jest rowna zero." << endl; // [cite: 72]
    }
    
    return 0;       // [cite: 44]
}