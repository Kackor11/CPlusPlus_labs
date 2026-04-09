#include <iostream>

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

int binomial_rec_helper(int n, int k, int curr, int acc) {
    if (curr > k) return acc;

    int next_acc = acc * (n - curr + 1) / curr;

    return binomial_rec_helper(n, k, curr + 1, next_acc);
}

int binomial_recursive(int n, int k) {
    if (k == 0) return 1;
    if (n == 0 || k > n) return 0;
    if (k > n - k) {k = n - k; }

    return binomial_rec_helper(n, k, 1, 1);
}

int main() {
    return 0;
}