//
// Created by tayssir on 7/23/25.
//

#include <bits/stdc++.h>

using namespace std;


int calPoints(vector<string> &operations) {
    stack<int> st;
    int sum = 0;
    for (string op : operations) {
        if (op == "C") {
            sum = sum - st.top();
            st.pop();
        }
        else if (op == "D") {
            sum += 2*st.top();
            st.push(2*st.top());
        }
        else if (op == "+") {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.push(a);
            st.push(a+b);
            sum+=a+b;
        }
        else {
            sum += stoi(op);
            st.push(stoi(op));
        }
    }

    return sum;
}

int main() {
    vector<string> nums = {"1","C"};
    cout << calPoints(nums) << "\n";
    return 0;
}
