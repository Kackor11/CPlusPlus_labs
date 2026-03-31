#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n{};        // Zmienna okreslajaca do jakiej liczby sumujemy
    int suma{};     // Zmienna przechowujaca wynik
    
    cout << "Podaj liczbe n: ";
    cin >> n;       // Wczytywanie liczby n
    
    // Petla for do obliczen
    // i zaczyna od 1, petla dziala dopoki i jest mniejsze lub rowne n
    for (int i = 1; i <= n; i++) {
        suma = suma + i; // W kazdej iteracji dodajemy kolejna liczbe
    }
    
    cout << "Suma liczb od 1 do " << n << " to: " << suma << endl; // Wypisywanie wyniku
    
    return 0;
}