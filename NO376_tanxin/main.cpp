#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()==1) return 1;
        if(nums.size()==2&&nums[0]-nums[1]!=0) return 2;
       /* int length=1;
        int left=nums[0],middle=nums[1];
        if(middle-left!=0) length++;

        for(int i=1;i<nums.size()-1;i++){
            int right=nums[i+1];
            if((middle-left)*(right-middle)<0){
                length++;
                left=middle;
                middle=right;
            }else if(middle-left==0){
                left=middle;
                middle=right;
            }
        }*/
       int left=0,middle=0,i,length=1;
       for(i=1;i<nums.size();i++){
           left=nums[i-1];
           middle=nums[i];
           if(middle-left!=0){
               length++;
               break;
           }
       }
        for(;i<nums.size()-1;i++) {
            int right = nums[i + 1];
            if ((middle - left) * (right - middle) < 0) {
                length++;
                left = middle;
                middle = right;
            }else{
                middle=right;
            }
        }
        return length;
    }
};
int main() {
    vector<int> a={33,53,12,64,50,41,45,21,97,35,47,92,39,0,93,55,40,46,69,42,6,95,51,68,72,9,32,84,34,64,6,2,26,98,3,43,30,60,3,68,82,9,97,19,27,98,99,4,30,96,37,9,78,43,64,4,65,30,84,90,87,64,18,50,60,1,40,32,48,50,76,100,57,29,63,53,46,57,93,98,42,80,82,9,41,55,69,84,82,79,30,79,18,97,67,23,52,38,74,15};
    Solution b;
    cout<<b.wiggleMaxLength(a);
    return 0;
}
