#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

void reverseArr(vector<int>&nums,int first,int last_index) {
    while (first < last_index) {
        swap(nums[first],nums[last_index]);
        first++;last_index--;
    }
}
bool check(vector<int>&nums) {
    int count = 0;
    for(int i = 1;i<nums.size();i++){
        // if array is rotated
        if(nums[i-1] > nums[i]){
            count++;
        }

    }
    cout << count;
}
int main() {
   vector<int>nums = {1,2,3,4,5,6,7};
    int k = 3;
    // int i = 0;
    // T.c = O(n2)
    // while(i<k) {
    //     //right-shift
    //     int j = nums.size()-1;
    //     int t = nums[j];
    //     while(j>0) {
    //         nums[j] = nums[j-1];
    //         j--;
    //     }
    //     nums[j] = t;
    //     i+=1;
    // }

    //best-approach T.C = o(n) S.c = O(n)
    // int i = 0;
    // pmr::vector<int>temp(nums.size());
    // while(i<nums.size()) {
    //    temp[(i+k)%nums.size()] = nums[i];
    //     i++;
    // }

    //# BEST APPROACH: USING REMAINDER AND REVERSAL {T.C = O(n) and S.C = O(1)}
    int k_ = k % nums.size(); // divide array into two groups
    reverseArr(nums,0,nums.size()-1); //reverse array
    reverseArr(nums,0,k_-1); // reversing the first group
    reverseArr(nums,k_,nums.size()-1); // reversing the second group

    vector<int>n1 = {3,4,5,1,2};
    cout << check(n1) << endl;
}
