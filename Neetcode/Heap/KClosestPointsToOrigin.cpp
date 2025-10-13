//
// Created by tayssir on 10/13/25.
//
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < points.size(); i++) {
        int dist = pow(points[i][0], 2) + pow(points[i][1], 2);
        pq.push({dist, i});
        if (pq.size() > k) pq.pop();
    }
    vector<vector<int>> res;
    while (!pq.empty()) {
        res.push_back(points[pq.top().first]);
        pq.pop();
    }
    return res;
}
