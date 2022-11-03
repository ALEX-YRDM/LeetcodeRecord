#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        /*vector<char> v;
        for(auto i=s.begin();i!=s.end();i++){
            if(*i==' ') {
                v.push_back('%');
                v.push_back('2');
                v.push_back('0');
            }else
                v.push_back(*i);
        }
        return string(v.begin(),v.end());*/
        int count=0;
        int sOldSize=s.size();
        for(auto i:s){
            if(i==' ') count++;
        }
        s.resize(s.size()+count*2);
        int sNewSize=s.size();
        for(int i=sNewSize-1,j=sOldSize-1;j<i;i--,j--){
            if(s[j]!=' ') s[i]=s[j];
            else{
                s[i]='0';
                s[i-1]='2';
                s[i-2]='%';
                i-=2;
            }
        }
        return s;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
