//
// Created by tayssir on 9/11/25.
//
#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
    int count = 0;
    if (s[0] != ' ') count++;
    for(int i = 1; i < s.length(); i++) {
        if (s[i-1] == ' ' && s[i] !=' ' ){
            count = 0;
            count++;
        }
        else if (s[i] != ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    return 0;
}