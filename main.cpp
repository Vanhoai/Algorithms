#include "bits/macros.cpp"
#include "bits/stdc++.h"
using namespace std;

/**
 * Swap Position
 *
 * input:
 *      T, N, M, A(i)
 *      1 ≤ T ≤ 100
 *      1 ≤ N, M ≤ 10^5
 *
 * output: print maximum milk
 *
 * @example
 *      input:
 *          1
 *          5
 *          5 4 3 2 1
 *      output:
 *          1 5
 *          2 4
 */

int main() {
    SETUP;

    int TC;
    cin >> TC;
    while (TC--) {
        int n;
        cin >> n;
        int a[n];
        FOR(i, 0, n) cin >> a[i];

        sort(a, a + n, greater<int>());
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += max(a[i] - i, 0);
        }

        cout << res << endl;
    }

    return 0;
}