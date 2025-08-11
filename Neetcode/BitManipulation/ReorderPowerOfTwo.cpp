//
// Created by tayssir on 8/11/25.
//
#include <bits/stdc++.h>

using namespace std;
string reorderString(int x) {
    string s = to_string(x);
    sort(s.begin(), s.end());
    return s;
}
bool reorderedPowerOf2(int n) {
    for (int i = 0; i < 32; i++) {
        if (reorderString(1 << i) == reorderString(n)) return true;
    }
    return false;
}
int main() {
    cout << reorderedPowerOf2(61) << endl;
    return 0;
}