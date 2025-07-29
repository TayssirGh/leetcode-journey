//
// Created by tayssir on 7/30/25.
//
#include <bits/stdc++.h>

using namespace std;
int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;
    stack<int> s;
    for (int student : students) {
       q.push(student);
    }
    for(int i=sandwiches.size()-1;i>=0;i--){
        s.push(sandwiches[i]);

    }
    int count = 0;
    while (!q.empty() && !s.empty()) {
        if (s.top() == q.front()) {
            s.pop();
            q.pop();
            count = 0;
        }
        else {
            int temp = q.front();
            q.pop();
            q.push(temp);
            count++;
        }
        if (count > q.size()) {
            break;
        }
    }
    return q.size();

}
int main() {
    vector<int> students = {1,1,1,0,0,1};
    // 111  011
    vector<int> sandwiches = {1,0,0,0,1,1};
    cout << countStudents(students, sandwiches)<< "\n";
    return 0;
}