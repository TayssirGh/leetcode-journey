//
// Created by tayssir on 10/7/25.
//
#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    for(int i=digits.size()-1; i>=0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;

}

int main() {
    vector<int> v = {9,9,9};
    vector<int> res = plusOne(v);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}