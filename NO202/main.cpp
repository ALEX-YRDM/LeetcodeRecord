#include <iostream>
#include<string>
#include<set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        s.insert(n);
        int k= sumSqu(n);
        while(1){
            if(k==1) return true;
            else if(s.count(k)!=0) return false;
            else {
                s.insert(k);
                k=sumSqu(k);
            }
        }


    }
private: int sumSqu(int n){
        string s=to_string(n);
        int sum=0;
        for(auto i=s.begin();i!=s.end();i++){
            sum+=(*i-'0')*(*i-'0');
        }
        return sum;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
