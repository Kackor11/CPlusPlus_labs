#include <iostream> // [cite: 33]
#include <string>   // [cite: 34]

using std::cin;     // [cite: 37]
using std::cout;    // [cite: 38]
using std::endl;    // [cite: 39]
using std::string;  // [cite: 40]

int main()          // [cite: 41]
{
    string imie{};  // Zmienna przechowujaca tekst, zainicjalizowana klamrami [cite: 62, 66]
    
    cout << "Podaj swoje imie: "; // Wypisywanie tekstu na ekran [cite: 52]
    cin >> imie;                  // Wczytywanie imienia wpisanego z klawiatury [cite: 61]
    
    cout << "Witaj, " << imie << "!" << endl; // Wypisywanie powitania i przejscie do nowej linii [cite: 53, 59]
    
    return 0;       // [cite: 44]
}