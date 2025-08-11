//
// Created by tayssir on 8/9/25.
//
#include <bits/stdc++.h>

using namespace std;
bool almoastGoodSolution(int n) { // This is actually a very good solution, Only that it loses double precision (tests 1109/1110)
    if (n<=0) return false;
    return floor(log(n)/log(2)) == log(n)/log(2);
}
bool isPowerOfTwo(int n) { // Here I added fabs: floating-point absolute value and compared with an epsilone for large numbers (0 ms)
    if (n<=0) return false;
    return fabs(log(n) / log(2) - round(log(n) / log(2))) < 1e-12;
}

bool leetcodeSolution(int n) {
            return n > 0 && not (n & n - 1); //This is a reallyy cool way to check isPower of two (x² is actually something like 1, 10,100)😻😻
}
int main() {
    // cout << test(2147483647) << endl;
    cout << isPowerOfTwo(536870912) << endl;
    return 0;
}