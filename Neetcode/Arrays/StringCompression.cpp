//
// Created by tayssir on 8/6/25.
//
#include <bits/stdc++.h>

using namespace std;
int compress(vector<char>& chars) {
    int index = 0;
    int i = 0;
    while (i < chars.size()) {
        char current = chars[i];
        int count = 0;
        while (i < chars.size() && chars[i] == current) {
            i++;
            count++;
        }
        chars[index ++] = current;
        if (count > 1) {
            for (char c: to_string(count)) {
                chars[index ++] = c;
            }
        }
    }
    return index;

}
int main() {
    vector<char> nums = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout << compress(nums) << '\n';
    return 0;
}