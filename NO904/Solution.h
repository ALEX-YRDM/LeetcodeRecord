//
// Created by alex on 22-9-18.
//

#ifndef NO904_SOLUTION_H
#define NO904_SOLUTION_H

#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int> &fruits) {
        if (fruits.size() <= 2) return fruits.size();
        int b1 = -1, b2 = -1;
        int length = 1;
        int i = 0;
        b1 = fruits[i];
        int result=0;
        for (int j = 1; j < fruits.size(); j++) {
            if (fruits[j] != b1 && b2 < 0) {
                b2 = fruits[j];
                length++;
                continue;
            }
            if (fruits[j] != b1 && fruits[j] != b2) {
                result = max(result, length);
                i = j - 1;
                length=1;
                b1=fruits[i];
                b2=fruits[j];
            }
            length++;
        }
        return max(result,length);
    }
};


#endif //NO904_SOLUTION_H
