#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        /*for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-1-i]);
        }*/
        reverse(s.begin(),s.end());
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
