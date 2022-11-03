#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int array[26]={0};
        for(auto i:magazine){
            array[i-'a']++;
        }
        for(auto i:ransomNote){
            if((--array[i-'a'])<0) return false;
        }
        return true;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
