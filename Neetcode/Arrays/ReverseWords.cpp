//
// Created by tayssir on 8/5/25.
//
#include <bits/stdc++.h>

using namespace std;
string reverseWords(string s) { // while this is just so cool , it is 1 ms and only beats 54% :((((
    stringstream ss(s);
    stack<string> st;
    string word, result;
    while (ss >> word) {  // Automatically skips extra spaces 😍
        st.push(word);
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
        if (st.empty()) { break;}
        result += " ";
    }
    return result;
}
string leetcodeSolution(string s) {
    reverse(s.begin(),s.end());
    int n=s.size();
    int left=0;
    int right=0;
    int i=0;
    while(i<n){
        while(i<n && s[i]==' ')i++;
        if(i==n)break;
        while(i<n && s[i]!=' '){
            s[right++]=s[i++];
        }
        reverse(s.begin()+left,s.begin()+right);
        s[right++]=' ';
        left=right;
        i++;
    }
    s.resize(right-1);
    return s;
}
int main() {
    cout << reverseWords("  hello world  ") << " ";
    return 0;
}
