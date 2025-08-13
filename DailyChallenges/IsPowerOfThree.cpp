//
// Created by tayssir on 8/13/25.
//
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n) { // this was 4 ms, beats only 47%
    return (n > 0) && fabs(log(n) / log(3) - round(log(n) / log(3))) < 1e-12;
}
bool leetcodeSolution(int n) { // the max is divided only by power of three cuz it is a prime number (3) composition
    const int maxPow = 1162261467;
    return n > 0 && maxPow % n == 0;
}
int main() {
    cout << isPowerOfThree(3) << endl;
    return 0;
}