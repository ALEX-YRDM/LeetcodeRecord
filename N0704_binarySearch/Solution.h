//
// Created by zbq on 2022/9/12.
//

#ifndef N0704_BINARYSEARCH_SOLUTION_H
#define N0704_BINARYSEARCH_SOLUTION_H

#include<vector>
using namespace std;
//precondition: sorted array and distinct values
//Runtime: 104 ms, faster than 5.16% of C++ online submissions for Binary Search.
//Memory Usage: 27.6 MB, less than 12.36% of C++ online submissions for Binary Search.
class Solution {
public:
    int search(vector<int> &nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high) {
            if (nums[(low + high) / 2] == target) {
                return (low + high) / 2;
            } else if (nums[(low + high) / 2] < target) {
                low = (low + high) / 2 + 1;
            } else {
                high = (low + high) / 2 - 1;
            }
        }
        return -1;

    }
};



#endif //N0704_BINARYSEARCH_SOLUTION_H
