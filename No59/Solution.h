//
// Created by alex on 22-9-20.
//

#ifndef NO59_SOLUTION_H
#define NO59_SOLUTION_H

#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> r(n,vector<int>(n,0));
        int startx=0,starty=0;
        int loop=n/2;
        int mid=n/2;
        int count=1;
        int offset=1;
        int i,j;
        while(loop--){
            i=startx;
            j=starty;

            for(j=starty;j<n-offset;j++){
                r[i][j]=count++;
            }
            for(i=startx;i<n-offset;i++){
                r[i][j]=count++;
            }
            for(;j>starty;j--){
                r[i][j]=count++;
            }
            for(;i>startx;i--){
                r[i][j]=count++;
            }
            startx++;
            starty++;
            offset++;
        }
        if(n%2){
            r[mid][mid]=count;
        }
        return r;
    }
};


#endif //NO59_SOLUTION_H
