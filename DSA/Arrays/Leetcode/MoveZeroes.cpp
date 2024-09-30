#include<iostream>
#include <vector>
using namespace std;

int main() {
    /*
    *   Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
        Note that you must do this in-place without making a copy of the array.
     */
    pmr::vector<int>nums = {0,0,0,0,0,0,1,1,1};
    int rounds = 0;
    int j = 0;
    while (rounds < nums.size()) {
        if(nums[rounds] != 0) {
            //swapping zero with non zero elements
            swap(nums[j],nums[rounds]);
            j++;
        }
        rounds ++;
    }
    for(int i:nums) {
        cout << i << endl;
    }
}
