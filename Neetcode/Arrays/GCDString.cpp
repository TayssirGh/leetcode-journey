//
// Created by tayssir on 8/5/25.
//

#include <bits/stdc++.h>

using namespace std;
string gcdOfStrings(string str1, string str2) {
    return (str1 + str2 != str2 + str1)? "": str1.substr(0, __gcd(str1.size(), str2.size()));
}
int main() {

    cout << gcdOfStrings("ABAB", "AB") << "\n";
    return 0;
}