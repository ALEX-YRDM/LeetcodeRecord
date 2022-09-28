//
// Created by alex on 22-9-15.
//

#ifndef NO26_SOLUTION_H
#define NO26_SOLUTION_H

#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        /*if(nums.size()==1) return 1;
        int slowPointer=0,fastPointer=1;
        for(;fastPointer<nums.size();fastPointer++){
            if(nums[slowPointer]!=nums[fastPointer]&&fastPointer==slowPointer+1){
                slowPointer++;
            }else if(nums[slowPointer]!=nums[fastPointer]&&fastPointer>slowPointer+1){
                slowPointer++;
                nums[slowPointer]=nums[fastPointer];
            }else{
                fastPointer++;
                if(fastPointer>=nums.size()) return slowPointer+1;
                while(nums[slowPointer]==nums[fastPointer]){
                    ++fastPointer;
                    if(fastPointer>=nums.size()) return slowPointer+1;
                }
                nums[++slowPointer]=nums[fastPointer];
            }

        }
        return slowPointer+1;*/


        int slow=0,fast=0;
        while(fast<nums.size()){
            if(nums[slow]==nums[fast]){
                fast++;
            }else{
                slow++;
                nums[slow]=nums[fast];
            }
        }
        return slow+1;
    }
};


#endif //NO26_SOLUTION_H
