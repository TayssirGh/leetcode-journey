#include <bits/stdc++.h>



using namespace std;

int maxProduct(vector<int> &arr) {
    auto n = arr.size();
    int result = arr[0];
    for (int i = 0; i < n; i++) {
        int mul = 1;
        for (int j = i; j < n; j++) {
            mul *= arr[j];
            result = max(result, mul);
        }
    }
    return result;
}
int trap(vector<int>& height) {
    int left = 0;
    int right = height.size();
    int maxLeft = height[0];
    int maxRight = height[right-1];
    int water = 0;
    while(left < right){
        if (height[left] < height[right]){
            left ++;
            maxLeft = max(maxLeft, height[left]);
            water += maxLeft - height[left];
        }
        else{
            right --;
            maxRight = max(maxRight, height[right]);
            water += maxRight - height[right];
        }
    }


    return  water;
}

int equilibriumPoint(vector<int>& arr){
    int leftSum =0, rightSum = 0;
    for (const auto &item: arr) {
        rightSum += item;
    }
    for (int i = 0; i < arr.size(); ++i) {
        rightSum -= arr[i];
        if (leftSum == rightSum){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}
vector<int> leaders(vector<int>& arr) {
    int maxRight = -1;
    int n = arr.size();
    for (int i = n-1; i >=0   ; i--) {
        int current = arr[i];
        arr[i] = maxRight;
        if (current > maxRight){
            maxRight = current;
        }
    }
    return arr;
}
int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    int n= stations.size();
    int fuel=startFuel; int fuelno=0;
    int ans=0;
    priority_queue<int> pq;
    while(fuel<target){
        while(fuelno<n && fuel>= stations[fuelno][0])
        {
            pq.push(stations[fuelno][1]);
            fuelno++;
        }
        if(pq.empty()) return -1;
        fuel = fuel+ pq.top();
        pq.pop();
        ans++;
    }
    return ans;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<vector<int>> stations = { {10,60},{20,3},{30,30},{60,40} };
//    vector<int> res = leaders(arr);
//    for (int x : res) {
//        cout << x << " ";
//    }
    cout << minRefuelStops(100,10,stations);

}

