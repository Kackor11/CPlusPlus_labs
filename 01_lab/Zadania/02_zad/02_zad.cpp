#include <iostream>
#include <string>

using namespace std;

int main() {

    string name{};

    cout << "Podaj swoje imie: ";
    cin >> name;
    cout << "Witaj " << name << "!" << endl;

    return 0;
}