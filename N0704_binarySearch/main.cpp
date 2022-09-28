#include <iostream>
#include"Solution.h"

int main() {
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(-0);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(9);
    nums.push_back(12);
    Solution s;
    cout<<s.search(nums,9);
    return 0;
}


