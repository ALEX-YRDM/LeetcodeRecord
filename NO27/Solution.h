//
// Created by alex on 22-9-14.
//

#ifndef NO27_SOLUTION_H
#define NO27_SOLUTION_H

#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Element.
        //Memory Usage: 8.6 MB, less than 91.96% of C++ online submissions for Remove Element.
        //time O(n^2)  memory:O(1)
        /*int count=0;
        for(int i=0;i<nums.size()-count;){
            if(val==nums[i]){
                count++;
                for(int j=i;j<nums.size()-count;j++){
                    nums[j]=nums[j+1];
                }

            }else{
                i++;
            }
        }
        int k=nums.size()-count;
        return k;*/

        //time:O(n) space:O(1)
        int slowIndex=0;
        for(int fastIndex=0;fastIndex<nums.size();fastIndex++){
            if(val!=nums[fastIndex]){
                nums[slowIndex]=nums[fastIndex];
                slowIndex++;
            }
        }
        return slowIndex;
    }

};


#endif //NO27_SOLUTION_H
