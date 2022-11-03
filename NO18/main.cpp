#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(nums.size()<=3) return res;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&&nums[j]==nums[j-1])  continue;
                int left=j+1;
                int right=nums.size()-1;
                while(right>left){
                    if((long long)nums[i]+nums[j]+nums[left]+nums[right]>target) right--;
                    else if((long long)nums[i]+nums[j]+nums[left]+nums[right]<target) left++;
                    else{
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(right>left&&nums[left]==nums[left+1]) left++;
                        while(right>left&&nums[right]==nums[right-1]) right--;
                        left++;
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
