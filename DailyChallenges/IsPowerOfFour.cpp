//
// Created by tayssir on 8/15/25.
//
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n) { // 0 ms beats 100%
    return (n > 0) && fabs(log(n) / log(4) - round(log(n) / log(4))) < 1e-12;
}
int main() {
    return 0;
}