//
// Created by tayssir on 8/13/25.
//
#include <bits/stdc++.h>
using namespace std;
string removeStars(string s) { // this is 24 ms beats only 29%
    if (s.empty()) return "";
    if (s[0] == '*') return "";
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        (s[i] == '*')?st.pop():st.push(s[i]);
    }
    string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
string leetcodeSolution(string s) { // 20 ms beats 48% (not so much better than mine 🤷)
    string result;
    for(char c:s){
        if(c=='*'){
            if(!result.empty()){
                result.pop_back();
            }
        }else{
            result.push_back(c);
        }
    }
    return result;
}
int main() {
    cout << removeStars("leet**cod*e")<< endl;
    return 0;
}