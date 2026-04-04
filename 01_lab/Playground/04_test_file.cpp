#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<int> oceny {1, 2, 3, 4, 5};
    std::vector<int> punkty_zycia (2, 100);

    std::cout << "Rozmiar vektora oceny: " << oceny.size() << std::endl;
    std::cout << "Rozmiar vektora punkty zycia: " << punkty_zycia.size() << std::endl;

    return 0;
}