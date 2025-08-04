//
// Created by tayssir on 8/5/25.
//

#include <bits/stdc++.h>

using namespace std;

string mergeAlternately(string word1, string word2) { // This beats 100% 0 ms
    string res;
    if (word1.empty()) {
        return word2;
    }
    if (word2.empty()) {
        return word1;
    }
    int i = 0, j = 0;
    while (i < word1.length() && j < word2.length()) {
        res += word1[i] ;
        res += word2[j] ;
        i++; j++;
    }
    if (i < word1.length()) {
        for (int k = i; k < word1.length(); k++) {
            res += word1[k];
        }
    }else if (j < word2.length()) {
        for (int k = j; k < word2.length(); k++) {
            res += word2[k];
        }
    }
    return res;
}
string leetcodeSolution(string word1, string word2) {
    string result;
    int i = 0, j = 0;
    while (i < word1.length() || j < word2.length()) {
        if (i<word1.length() ) {
            result += word1[i++];
        }
        if (j<word2.length() ) {
            result += word2[j++];
        }
    }
    return result;
}
int main() {

    cout << leetcodeSolution("hlo", "el") << "\n";
    return 0;
}