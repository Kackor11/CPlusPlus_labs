#include <iostream>
#include <chrono>

using namespace std;

long long binomial(int n, int k) {

    if (k == 0) return 1;
    if (n == 0 || k > n) return 0;

    long long res{1};

    if (k > n - k) {k = n - k; }

    for (int i = 1; i <= k; i++)
    {
        res *= (n - i + 1);
        res /= i;
    }

    return res;
}

long long binomial_rec_helper(int n, int k, int curr, long long acc) {
    if (curr > k) return acc;

    long long next_acc = acc * (n - curr + 1) / curr;

    return binomial_rec_helper(n, k, curr + 1, next_acc);
}

long long binomial_recursive(int n, int k) {
    if (k == 0) return 1;
    if (n == 0 || k > n) return 0;
    if (k > n - k) {k = n - k; }

    return binomial_rec_helper(n, k, 1, 1);
}

// PROGRAM Z WYKLADU:
int main() {
    const int iteration_start = 30, iteration_end = 40;
    const int k = 15;
    const int repetitions = 1000000;
    long long value1 = 0, value2 = 0;

    auto function1 = binomial;
    auto function2 = binomial_recursive;

    for (int i = iteration_start; i < iteration_end; i++) {
        // Pomiar Iteracyjny
        auto begin = chrono::high_resolution_clock::now();
        for(int r = 0; r < repetitions; r++) {
            value1 = function1(i, k);
        }
        auto end = chrono::high_resolution_clock::now();
        auto elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << "Iter(" << i << "," << k << ") = " << value1;
        cout << " time (1mln calls): " << elapsed.count() << " s" << endl;

        // Pomiar Rekurencyjny
        begin = chrono::high_resolution_clock::now();
        for(int r = 0; r < repetitions; r++) {
            value2 = function2(i, k);
        }
        end = chrono::high_resolution_clock::now();
        elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << " Rec(" << i << "," << k << ") = " << value2;
        cout << " time (1mln calls): " << elapsed.count() << " s" << endl;
    }
}