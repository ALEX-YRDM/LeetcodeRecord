#include <iostream>

#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        for(auto i=nums1.begin();i!=nums1.end();i++){
            if(m.count(*i)==0){
                m[*i]=1;
            }else{
                m[*i]+=1;
            }

        }
        for(auto i=nums2.begin();i!=nums2.end();i++){
            if(m.count(*i)!=0) {
                m[*i] = 0;
            }
        }
        vector<int> res;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second==0) res.push_back(i->first);
        }

        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

