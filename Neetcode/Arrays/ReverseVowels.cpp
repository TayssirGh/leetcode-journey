//
// Created by tayssir on 8/5/25.
//
#include <bits/stdc++.h>

using namespace std;
bool isVowel(char c) {
    return (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u');
}
string reverseVowels(string s) { // this is a stack based solution , 4ms beats only 25% 😢
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (tolower(s[i]) =='a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u' ) {
            st.push(s[i]);
            s[i] = *"_";
        }
    }
    if (st.empty()) {
        return s;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == *"_") {
            s[i] = st.top();
            st.pop();
        }
    }
    return s;
}
string leetcodeSolution(string s) { // this, on the other hand 0 ms beats 100%
    int start = 0, end = s.length() - 1;
    while (start < end) {
        while (start < end && !isVowel(s[start])) {
            start++;
        }
        while (start < end && !isVowel(s[end])) {
            end ++;
        }
        swap(s[start], s[end]);
        start ++;
        end --;
    }
    return s;
}
int main() {

    cout << leetcodeSolution("leetcode") << " ";
    return 0;
}
