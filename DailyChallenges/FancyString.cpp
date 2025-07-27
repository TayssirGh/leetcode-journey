//
// Created by tayssir on 7/21/25.
//

#include <bits/stdc++.h>

using namespace std;

string makeFancyString(string s) {
    string result;
    if (s.length() <=1) {
        return  s;
    }
    result += s[0] ;
    result += s[1] ;
    for (int i = 2; i < s.length(); i++) {
        if (s[i] == s[i-1] && s[i] == s[i-2]) {
           continue;
        }
        result += s[i];
    }
    return result;
}
string leetcodeSolution(string s) {
    vector<char> chars(s.begin(), s.end());
    char last = chars[0];
    int count = 1;
    int pos = 1;

    for (int i = 1; i < chars.size(); ++i) {
        if (chars[i] != last) {
            last = chars[i];
            count = 0;
        }

        if (++count > 2) continue;

        chars[pos++] = chars[i];
    }

    return string(chars.begin(), chars.begin() + pos);
}
int main() {
    const string haystack = "abbcccddddeeeee";
    cout << makeFancyString(haystack) << "\n";
    return 0;
}