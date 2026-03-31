#include <iostream> // [cite: 33]

using std::cin;     // [cite: 37]
using std::cout;    // [cite: 38]
using std::endl;    // [cite: 39]

int main()          // [cite: 41]
{
    int n{};        // Zmienna okreslajaca do jakiej liczby sumujemy [cite: 97]
    int suma{};     // Zmienna przechowujaca wynik [cite: 97]
    
    cout << "Podaj liczbe n: ";
    cin >> n;       // Wczytywanie liczby n [cite: 91]
    
    // Petla for do obliczen [cite: 100]
    // i zaczyna od 1, petla dziala dopoki i jest mniejsze lub rowne n
    for (int i = 1; i <= n; i++) {
        suma = suma + i; // W kazdej iteracji dodajemy kolejna liczbe [cite: 101]
    }
    
    cout << "Suma liczb od 1 do " << n << " to: " << suma << endl; // Wypisywanie wyniku [cite: 94, 102]
    
    return 0;       // [cite: 44]
}