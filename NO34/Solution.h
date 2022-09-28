//
// Created by zbq on 2022/9/13.
//

#ifndef NO34_SOLUTION_H
#define NO34_SOLUTION_H

#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //O(n) 暴力成功 但题目要求O(log n)
        /*int first=-1,second=-1,i=0;
        vector<int> v;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                first=i;
                break;
            }
        }
        second=first;
        for(i++;i<nums.size();i++){
            if(nums[i]==target) {
                second = i;
                continue;
            }else
                break;
        }
        v.push_back(first);
        v.push_back(second);
        return v;*/

       /* vector<int> v1,v2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v1.push_back(i);
            }
            if(!v1.empty()&&nums[i]!=target)
                break;
        }
        if(!v1.empty()){
            v2.push_back(v1.front());
            v2.push_back(v1.back());
        }else{
            v2.push_back(-1);
            v2.push_back(-1);
        }
        return v2;*/

       //binary search 找出某个target位置时间 O(log n) 后面for循环找最左最右时间复杂度为O(n)
        /*int left=0,right=nums.size()-1;
        int index=-1,first=-1,second=-1;
        vector<int> v;
        while(left<=right){
            if(nums[(left+right)/2]==target){
                index=(left+right)/2;
                first=second=index;
                break;
            }else if(nums[(left+right)/2]<=target)
                left=(left+right)/2+1;
            else
                right=(left+right)/2-1;
        }
        if(index>=0){
            for(int i=index-1;i>=0;i--){
                if(nums[i]==target){
                    first=i;
                }else
                    break;
            }
            for(int i=index+1;i<nums.size();i++){
                if(nums[i]==target){
                    second=i;
                }else
                    break;
            }
        }
        v.push_back(first);
        v.push_back(second);
        return v;*/

    }

private:
    int getRightBorder(vector<int>& nums,int target){
        int left=0;
        int right=nums.size()-1;
        int rightBorder= -2;
        while(left<=right){
            int middle=(left+right)/2;
            if(nums[middle]>target){
                right=middle-1;
            }else{
                left=middle+1;
                rightBorder=left;
            }
        }
    }
};


#endif //NO34_SOLUTION_H
