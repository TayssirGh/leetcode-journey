//
// Created by tayssir on 9/15/25.
//
#include <bits/stdc++.h>
using namespace std;
string predictPartyVictory(string senate) {
    queue<int> rad, dir;
    for (int i = 0; i < senate.length(); i++) {
        (senate[i] == 'R')?rad.push(i):dir.push(i);
    }
    int n = senate.length();
    while (!rad.empty() && !dir.empty()) {
        if (rad.front() < dir.front()) {
            rad.push(n++);
        }
        else if (rad.front() > dir.front()) {
            dir.push(n++);
        }
        rad.pop();
        dir.pop();
    }
    return rad.empty()? "Dire": "Radiant";
}