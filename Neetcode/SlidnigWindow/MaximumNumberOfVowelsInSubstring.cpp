//
// Created by tayssir on 8/11/25.
//
#include <bits/stdc++.h>
using namespace std;
int TLE(string s, int k) { // this gave me TLE 🤷
    int sum = 0, maxVow = 0;
    int left = 0, right = k;
    while (right <= s.size()) {
        sum = 0;
        for (int i = left; i < right; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                sum ++;
            }
        }
        maxVow = max(maxVow, sum);
        right ++;
        left ++;
    }
    return maxVow;
}
bool isvowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}
int maxVowels(string s, int k) {
   int maxVow = 0;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isvowel(s[i])) { sum ++; }
        if (i >= k && isvowel(s[i])) { sum --; }
        maxVow = max(maxVow, sum);
    }
    return maxVow;
}
int main() {
    cout << maxVowels("weallloveyou", 7);
    return 0;
}