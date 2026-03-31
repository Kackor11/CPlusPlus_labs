#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string imie{};  // Zmienna przechowujaca tekst, zainicjalizowana klamrami
    
    cout << "Podaj swoje imie: "; // Wypisywanie tekstu na ekran
    cin >> imie;                  // Wczytywanie imienia wpisanego z klawiatury
    
    cout << "Witaj, " << imie << "!" << endl; // Wypisywanie powitania i przejscie do nowej linii
    
    return 0;
}