#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(string& s,int start,int end){
        for(int i=start,j=end;i<j;i++,j--){
            swap(s[i],s[j]);
        }
    }
    string reverseLeftWords(string s, int n) {
        reverse(s,0,s.size()-1);
        int spilt=s.size()-n;
        reverse(s,0,spilt-1);
        reverse(s,spilt,s.size()-1);
        return s;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
