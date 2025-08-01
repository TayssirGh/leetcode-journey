//
// Created by tayssir on 8/1/25.
//
#include <bits/stdc++.h>

using namespace std;
vector<int> insertionSort(vector<int>& nums) { /// this is a straight forward implementation, but it gives TLE!!!
    for (int i = 1; i < nums.size(); i++) {
        int j = i-1;
        while (j >= 0 && nums[j] > nums[j+1]) {
            int temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = temp;
            j--;
        }
    }
        return nums;
}

vector<int> merge(vector<int>& nums, int low, int mid, int high) {
    int c1 = mid - low + 1;
    int c2 = high - mid;
    vector<int> T1(c1), T2(c2);
    // Here just making a copy for the two arrays, remember the separated arrays
    for (int i = 0; i < c1; i++) {
        T1[i] = nums[low+i];
    }
    for (int i = 0; i < c2; i++) {
        T2[i] = nums[mid+i+1];
    }
    int i = 0, j = 0;
    int k = low;
    // This is the double pointer technique
    while (i < c1 && j < c2) {
        if (T1[i] <= T2[j]) {
            nums[k] = T1[i];
            i++;
        }
        else {
            nums[k] = T2[j];
            j++;
        }
        k++;
    }
    while (i<c1) {
        nums[k] = T1[i];
        i++;
        k++;
    }
    while (j<c2) {
        nums[k] = T2[j];
        k++;
        j++;
    }
    return nums;
}
vector<int> mergeSort(vector<int>& nums, int start, int end) { // This is also a straight forward implementation, but also TLE !!!!
    if (end <= start ) {
        return nums;
    }
    int mid = (start + end) / 2;
    mergeSort(nums, start, mid);
    mergeSort(nums, mid+1, end);
    return merge(nums, start, mid, end);
}
vector<int> mergeSortArray(vector<int>& nums) {
    return mergeSort(nums, 0, nums.size()-1);
}
vector<int> sortArray(vector<int>&nums) { // THIS actually passed and beats 84% 👀
     sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    vector<int> students = {5,2,3,1};
    const vector<int> res = sortArray(students);
    for (int student : res) {
        cout << student << "\n";
    }
    return 0;
}