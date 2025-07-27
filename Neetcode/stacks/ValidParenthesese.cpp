//
// Created by tayssir on 7/24/25.
//

#include <bits/stdc++.h>

using namespace std;
bool isPair(char a, char b) {
    return a == '(' && b == ')' || a == '[' && b == ']' || a == '{' && b == '}';
}
bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (!st.empty()) {
            char curr = st.top();
            if (isPair(curr, s[i])) {
                st.pop();
                continue;
            }

        }
        st.push(s[i]);
    }
        return st.empty();
}
int main() {
    vector<string> nums = {"1","C"};
    cout << isValid("(()")<< "\n";
    return 0;
}