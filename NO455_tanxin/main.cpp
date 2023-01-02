#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int res=0;
        for(int i=s.size()-1,j=g.size()-1;i>=0&&j>=0;){
            if(s[i]>=g[j]){
                res++;
                i--;
                j--;
            }else{
                j--;
            }
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
