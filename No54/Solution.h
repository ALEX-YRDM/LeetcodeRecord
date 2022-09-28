//
// Created by alex on 22-9-22.
//

#ifndef NO54_SOLUTION_H
#define NO54_SOLUTION_H

#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> r;
        int loop=(min(m,n)+1)/2;
        int startx=0,starty=0;
        int offset=0;
        int i,j;
        bool full=false;
        while(loop--){
            i=startx,j=starty;
            for(;j<n-offset;j++){
                r.push_back(mat[i][j]);
                if(r.size()>=m*n){
                    full=true;
                    break;
                }
            }
            if(full)
                break;
            j--;i++;
            for(;i<m-offset;i++){
                r.push_back(mat[i][j]);
                if(r.size()>=m*n){
                    full=true;
                    break;
                }
            }
            if(full)
                break;
            i--;j--;
            for(;j>starty;j--){
                r.push_back(mat[i][j]);
                if(r.size()>=m*n){
                    full=true;
                    break;
                }
            }
            if(full)
                break;
            for(;i>startx;i--){
                r.push_back(mat[i][j]);
                if(r.size()>=m*n){
                    full=true;
                    break;
                }
            }
            if(full)
                break;
            startx++,starty++,offset++;

        }

        return r;

    }
};


#endif //NO54_SOLUTION_H

