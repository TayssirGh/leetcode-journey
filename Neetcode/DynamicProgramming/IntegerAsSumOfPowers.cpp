//
// Created by tayssir on 8/12/25.
//
#include <bits/stdc++.h>
using namespace std;
int numberOfWays(int n, int x) {
    const int MOD = 1'000'000'007;
    vector<int> powers;
    for (int i = 1; i <= n; i++) {
        long long p = 1;
        p = pow(i, x);
        if (p > n) break;
        powers.push_back(static_cast<int>(p));
    }
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    for (int p : powers) {
        for (int s = n; s >= p; --s) {
            dp[s] = (dp[s] + dp[s - p]) % MOD;
        }
    }
    return (int)dp[n];

}
int main() {
        cout << numberOfWays(4, 1) << endl;
    return 0;
}