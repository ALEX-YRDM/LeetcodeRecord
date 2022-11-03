#include <iostream>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int record[26]={0};
        for(int i=0;i<s.size();i++){
            record[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            record[t[i]-'a']--;
        }

        for(int i:record){
            if(i!=0) return false;
        }
        return true;
    }
};
int main() {

    return 0;
}


