//
// Created by tayssir on 8/14/25.
//
#include <bits/stdc++.h>

using namespace std;
string largestGoodInteger(string num) {
    string  maxResult;
        for (int i = 2; i < num.size(); i++) {
            if (num[i] == num[i - 1] && num[i - 1] == num[i - 2]) {
            maxResult = max(string(3, num[i]), maxResult);
            }
        }
    return maxResult;
}
int main() {
    cout << largestGoodInteger("13334555") << "\n";
    return 0;
}