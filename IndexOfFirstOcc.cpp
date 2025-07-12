//
// Created by tayssir on 7/12/25.
//
#include <bits/stdc++.h>

using namespace std;
 int strStr(const string &haystack, const string &needle){
     if( haystack.length() < needle.length() ){
         return -1;
     }
     if (haystack == needle) {
         return 0;
     }
    for(int i = 0; i <= haystack.length() - needle.length(); ++i) {
        if(haystack.substr(i, needle.length()) == needle) {
            return i;
        }
    }
    return -1;
}
int main() {
    // vector<vector<int>> nums = {{5,10}, {2,5}, {4,7}, {3,9}};
     const string haystack = "sda";
     const string tst = "***********";
     const string needle = "a";
    cout << strStr(haystack, needle) << "\n";
    return 0;
}