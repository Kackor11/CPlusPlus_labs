#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<std::string> baza_danych {};

    baza_danych.reserve(500);

    baza_danych.emplace_back("Jan");

    std::cout << "Aktualny rozmiar bazy danych: " << baza_danych.size() << std::endl;
    std::cout << "Aktualna pojemnosc bazy danych: " << baza_danych.capacity() << std::endl;

    baza_danych.shrink_to_fit();

    std::cout << "Aktualny rozmiar bazy danych: " << baza_danych.size() << std::endl;
    std::cout << "Aktualna pojemnosc bazy danych: " << baza_danych.capacity() << std::endl;

    return 0;
}