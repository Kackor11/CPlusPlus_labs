#include <iostream>

int factorial(int x) {

    int res{1};

    for (int i = 1; i <= x; i++)
    {
        res *= i;
    }
    
    return res;

}

int binomial(int n, int k) {

    if (k == 0) return 1;
    if (n == 0 || k > n) return 0;

    int res{1};

    if (k > n - k) {k = n - k; }

    for (int i = 1; i <= k; i++)
    {
        res *= (n - i + 1);
        res /= i;
    }

    return res;
}

int binomial_recursive() {
    return 0;
}

int main() {
    return 0;
}