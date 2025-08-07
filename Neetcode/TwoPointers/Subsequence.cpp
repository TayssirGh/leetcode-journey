//
// Created by tayssir on 8/7/25.
//
#include <bits/stdc++.h>

using namespace std;
bool isSubsequence(string s, string t) {
    if (s.length() == 0) {return true;}
    if (t.length() == 0) {return false;}
    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    return i == s.size()  ;
}

int main() {
    cout << isSubsequence("", "ahbgdc") << '\n';
    return 0;
}