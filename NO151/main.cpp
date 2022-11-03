#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int i,j;
        for(i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            for(j=i;j<s.size();j++){
                if(s[j]==' ') {
                    v.push_back(string(s.begin()+i,s.begin()+j));
                    break;
                }else if(j==s.size()-1){
                    v.push_back(string(s.begin()+i,s.begin()+j+1));
                }
                else continue;
            }
            i=j;
        }
        string res;
        for(auto it=v.rbegin();it!=v.rend();it++){
            if(it==v.rbegin()) res=res+*it;
            else res=res+" "+*it;
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
