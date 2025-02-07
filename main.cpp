#include "bits/macros.cpp"
#include "bits/stdc++.h"
using namespace std;

int n, k, ok, X[100];

void init() {
    for (int i = 1; i <= k; i++)
        X[i] = i;
}

void gen() {
    int i = k;
    while (i >= 1 && X[i] == n - k + i)
        i--;

    if (i == 0)
        ok = 0;
    else {
        X[i]++;
        for (int j = i + 1; j <= k; j++)
            X[j] = X[j - 1] + 1;
    }
}

int main() {
    SETUP;

    cin >> n >> k;
    init();

    ok = 1;
    while (ok) {
        for (int i = 1; i <= k; i++) {
            cout << X[i] << " ";
        }

        cout << endl;
        gen();
    }

    return 0;
}