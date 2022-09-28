//
// Created by alex on 22-9-18.
//

#ifndef NO209_SOLUTION_H
#define NO209_SOLUTION_H

#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        /*for(int j=1;j<=nums.size();j++){
            if(find(nums,target,j)!=0) return j;
        }
        return 0;
    }
private:
    int find(vector<int>& nums,int target,int length){
        for(int i=0;i<=nums.size()-length;i++){
            int k=length,sum=0;
            while(k>=1){
                sum+=nums[i+k-1];
                k--;
            }
            if(sum>=target) return length;
        }
        return 0;*/

        //O(n^2)
        /*int result=nums.size()+1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum>=target){
                    result=min(result,j-i+1);
                    break;
                }

            }
        }
        return result>nums.size()?0:result;*/
        int result=nums.size()+1;
        int sum=0;
        int i=0;
        int sublength=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum>=target){
                sublength=(j-i+1);
                result=min(sublength,result);
                sum-=nums[i];
                i++;
            }
        }
        return result>nums.size()?0:result;


    }

};


#endif //NO209_SOLUTION_H
