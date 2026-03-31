#include <iostream>
#include <string>

using namespace std;

int main() {
    int n{};

    cout << "Podaj liczbe calkowita: ";
    cin >> n;

    if (n > 0) {
        cout << "Liczba jest dodatnia" << endl;
    } else if (n < 0)
    {
        cout << "Liczba jest mniejsza od zera" << endl;
    } else {
        cout << "Liczba jest rowna zeru" << endl;
    }

    if (n % 2 == 0)
    {
        cout << "Liczba " << n << " jest parzysta";
    } else
    {
        cout << "Liczba " << n << " jest nieparzysta";
    }

    return 0;
}