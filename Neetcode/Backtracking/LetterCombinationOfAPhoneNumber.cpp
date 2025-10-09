//
// Created by tayssir on 10/9/25.
//
#include <bits/stdc++.h>
using namespace std;
void backtrack(string digits, vector<string>& output, string &temp, vector<string>& pad, int index) {
    if (index == digits.length()) {
        output.push_back(temp);
        return;
    }
    string value = pad[digits[index]-'0'];
    for(int i=0; i<value.size(); i++){
        temp.push_back(value[i]);
        backtrack(digits, output, temp, pad, index+1);
        temp.pop_back();
    }
}
vector<string> letterCombinations(string digits) {
    if (digits.empty()) return vector<string>();
    vector<string> ans;
    vector<string> letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string temp = "";
    backtrack(digits, ans, temp, letters, 0);
    return ans;

}