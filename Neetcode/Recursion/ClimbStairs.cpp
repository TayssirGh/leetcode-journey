//
// Created by tayssir on 7/31/25.
//
#include <bits/stdc++.h>

using namespace std;
int climbStairs(int n) { //TIME LIMIT EXCEEDED !!!!!!!!!!!!!!
   if (n==0 || n==1) {
       return 1;
   }
    return climbStairs(n-1) + climbStairs(n-2);
}
// Think of it like a sequence, F(n) = F(n-1) + F(n-2) just like fibonacci only different entry values
int leetcodeSolution(int n) {
    if (n <=3) {
        return n;
    }
    int prev1 = 3;
    int prev2 = 2;
    int cur = 0;
    for (int i = 3; i < n; i++) {
        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
    return cur;
}


int main() {
    cout << leetcodeSolution(6)<< "\n";
    return 0;
}