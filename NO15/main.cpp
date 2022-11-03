#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break;
            if(i>0&&nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=nums.size()-1;
            while(right>left){
                if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }else if(nums[i]+nums[left]+nums[right]<0){
                    left++;
                }else{
                    res.push_back({nums[i],nums[left],nums[right]});
                    while(right>left&&nums[right]==nums[right-1]) right--;
                    while(right>left&&nums[left]==nums[right]) left++;
                    left++;
                    right--;
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
