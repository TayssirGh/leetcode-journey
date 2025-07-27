//
// Created by tayssir on 7/12/25.
//
#include <bits/stdc++.h>

using namespace std;

std::unordered_map<int, string> charToInt = {
    {1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}, {5, "E"},
{6, "F"}, {7, "G"}, {8, "H"}, {9, "I"}, {10, "J"},
{11, "K"}, {12, "L"}, {13, "M"}, {14, "N"}, {15, "O"},
{16, "P"}, {17, "Q"}, {18, "R"}, {19, "S"}, {20, "T"},
{21, "U"}, {22, "V"}, {23, "W"}, {24, "X"}, {25, "Y"},
{0, "Z"}
};
string convertToTitle(int columnNumber) {
    string result;
    while (columnNumber > 0) {
        columnNumber--;
        result += char((columnNumber % 26) + 'A') ;
        columnNumber /= 26;
    }
    return result;
}

int main() {
    vector<int> nums = {0};
    cout << convertToTitle(702) << "\n";
    return 0;
}
