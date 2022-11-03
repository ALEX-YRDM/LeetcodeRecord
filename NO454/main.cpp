#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int result=0;
        map<int,int> m1,m2;
        for(auto i:nums1){
            for(auto j:nums2){
                if(m1.count(i+j)==0){
                    m1[i+j]=1;
                }else{
                    m1[i+j]++;
                }
            }
        }
        for(auto i:nums3){
            for(auto j:nums4){
                auto iter=m1.find(-(i+j));
                if(iter!=m1.end()){
                    result+=(*iter).second;
                }
            }
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
