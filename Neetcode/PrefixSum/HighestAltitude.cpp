//
// Created by tayssir on 8/12/25.
//
#include <bits/stdc++.h>

using namespace std;
int largestAltitude(vector<int>& gain) { // This is 0 ms beats 100% runtime and 45% mem : really cool 😎
    int maxGain = 0, sum = 0;
    for (int i = 0; i < gain.size(); i++) {
        sum += gain[i];
        maxGain = max(maxGain, sum);
    }
    return maxGain;
}
int leetcodeSolution(vector<int>& gain) { // This is a real impl for prefixSum, also 0 ms, but beats only 9% mem
    int maxAltitude = 0;
    int n = gain.size();
    vector<int> altitudes(n + 1, 0);

    for (int i = 0; i < n; i++) {
        altitudes[i + 1] = altitudes[i] + gain[i];
        maxAltitude = max(maxAltitude, altitudes[i + 1]);
    }

    return maxAltitude;
}
int main() {
    vector<int >gain = {-4,-3,-2,-1,4,3,2};
    cout << largestAltitude(gain) << endl;
    return 0;
}