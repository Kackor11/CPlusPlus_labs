#include <iostream>
#include <chrono>

using namespace std;

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

// MY MAIN:
// int main() {
//     int res_ite = nwd(1989, 867);
//     std::cout << "Wynik dla wersji iteracyjnej: " << res_ite << std::endl;
//     int res_rec = nwd_rec(1989, 867);
//     std::cout << "Wynik dla wersji rekurencyjnej: " << res_rec << std::endl;

//     return 0;
// }


// PROGRAM Z WYKLADU:
int main() {
    const int iteration_start = 1000000;
    const int iteration_end = 1000020;
    const int duza_liczba = 2147483647; 
    const int repetitions = 1000000;
    int value1 = 0, value2 = 0;

    auto function1 = nwd;
    auto function2 = nwd_rec;

    for (int i = iteration_start; i < iteration_end; i++) {
        auto begin = chrono::high_resolution_clock::now();
        for(int r = 0; r < repetitions; r++) {
            value1 = function1(duza_liczba, i);
        }
        auto end = chrono::high_resolution_clock::now();
        auto elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << "Iter NWD time (1mln calls): " << elapsed.count() << " s | Res: " << value1 << endl;

        begin = chrono::high_resolution_clock::now();
        for(int r = 0; r < repetitions; r++) {
            value2 = function2(duza_liczba, i);
        }
        end = chrono::high_resolution_clock::now();
        elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << " Rec NWD time (1mln calls): " << elapsed.count() << " s | Res: " << value2 << endl;
    }
}