//
// Created by tayssir on 8/13/25.
//
#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) { // beats 100% 😊
    unordered_map<int, int> mp;
    for (int element : arr) {
        mp[element] ++;
    }
    unordered_set <int> s;
    for (auto m: mp) {
        s.insert(m.second);
    }
    return s.size() == mp.size();
}
int main() {
    vector<int >gain = {1,2,1,3,3,3};
    cout << uniqueOccurrences(gain) << endl;
    return 0;
}