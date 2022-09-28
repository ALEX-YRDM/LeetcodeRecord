//
// Created by alex on 22-9-16.
//

#ifndef NO977_SOLUTION_H
#define NO977_SOLUTION_H
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    /*vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        quickSort(nums,0,nums.size()-1);
        return nums;

    }
private:
    int partition(vector<int>& nums,int low,int high){
        int pivot=nums[low];
        while(low<high){
            while(low<high&&nums[high]>=pivot) high--;
            swap(nums[low],nums[high]);
            while(low<high&&nums[low]<=pivot) low++;
            swap(nums[low],nums[high]);
        }
        return low;
    }

    void quickSort(vector<int>& nums,int low,int high){
        if(low<high){
            int pivot= partition(nums,low,high);
            quickSort(nums,low,pivot-1);
            quickSort(nums,pivot+1,high);
        }
    }*/
    vector<int> sortedSquares(vector<int>& nums) {
        int low=0,high=nums.size()-1,k=nums.size()-1;
        vector<int> result(nums.size(),0);
        while(low<=high){
            if(fabs(nums[low])<fabs(nums[high])){
                result[k]=nums[high]*nums[high];
                k--;
                high--;
            }else{
                result[k]=nums[low]*nums[low];
                k--;
                low++;
            }
        }
        return result;
    }
};


#endif //NO977_SOLUTION_H
