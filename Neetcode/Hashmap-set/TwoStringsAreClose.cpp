//
// Created by tayssir on 8/13/25.
//
#include <bits/stdc++.h>
using namespace std;
bool closeStrings(string word1, string word2) { // This is kinda slow , 47ms beats only 16% (inserting in set is log(n) -> sol is O(nlog(n))
    if (word1.length() != word2.length()) {
        return false;
    }
    unordered_set<int> letters1, letters2;
    vector<int> freq1(26, 0), freq2(26, 0);
    for (int i = 0; i < word1.size(); i++) {
        freq1[word1[i] - 'a']++;
        letters1.insert(word1[i]);
    }
    for (int i = 0; i < word2.size(); i++) {
        freq2[word2[i] - 'a']++;
        letters2.insert(word2[i]);
    }
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());
    return freq1 == freq2 && letters1 == letters2;

}
bool leetcodeSolution(string word1, string word2) {  // This is 12ms , beats only 67%, but it is the best I've seen so far
    std::vector<int> freq1(26, 0);
    std::vector<int> freq2(26, 0);

    for (char ch : word1) {
        freq1[ch - 'a']++;
    }

    for (char ch : word2) {
        freq2[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0)) {
            return false;
        }
    }

    std::sort(freq1.begin(), freq1.end());
    std::sort(freq2.begin(), freq2.end());

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}
int main() {
    return 0;
}