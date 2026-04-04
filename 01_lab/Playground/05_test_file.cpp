#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<std::string> ekwipunek {};

    ekwipunek.push_back("Miecz");
    ekwipunek.push_back("Tarcza");
    ekwipunek.push_back("Mikstura");

    std::cout << "Pierwszy element z listy: " << ekwipunek.front() << std::endl;
    std::cout << "Ostatni element z listy: " << ekwipunek.back() << std::endl;
    std::cout << "Drugi dodany element z listy: " << ekwipunek.at(1) << std::endl;
    
    return 0;
}