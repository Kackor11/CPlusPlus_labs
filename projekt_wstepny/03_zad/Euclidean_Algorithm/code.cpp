#include <iostream>

int nwd(int a, int b) {
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int nwd_rec(int a, int b) {
    if (b == 0) {return a; }

    int c = a % b;
    a = b;
    b = c;

    return nwd_rec(a, b); 
}

int main() {
    int res_ite = nwd(1989, 867);
    std::cout << "Wynik dla wersji iteracyjnej: " << res_ite << std::endl;
    int res_rec = nwd_rec(1989, 867);
    std::cout << "Wynik dla wersji rekurencyjnej: " << res_rec << std::endl;

    return 0;
}
