//
// Created by tayssir on 7/13/25.
//
#include <bits/stdc++.h>

using namespace std;
int reverseBits(const int n) {
        return (n & 0x55555555) + ((n >> 1) & 0x55555555);
}
int main() {
    cout << reverseBits(43261596) << "\n";
    return 0;
}