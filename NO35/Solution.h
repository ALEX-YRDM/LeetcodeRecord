//
// Created by zbq on 2022/9/12.
//

#ifndef NO35_SOLUTION_H
#define NO35_SOLUTION_H
#include<vector>
using namespace std;

class Solution {
public:
    /*int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            if(nums[(low+high)/2]==target)
                return (low+high)/2;
            else if(nums[(low+high)/2]<target)
                low=(low+high)/2+1;
            else
                high=(low+high)/2-1;
        }
        //return low>high?low:high;
        return low;
    }*/
    int searchInsert(vector<int>& nums, int target){
        for(int i=0;i<nums.size();i++){
            if(target<=nums[i])
                return i;
        }
        return nums.size();
    }
};


#endif //NO35_SOLUTION_H
