//
// Created by zbq on 2022/9/13.
//

#ifndef NO69_SOLUTION_H
#define NO69_SOLUTION_H

//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
//Memory Usage: 5.9 MB, less than 73.79% of C++ online submissions for Sqrt(x).
class Solution {
public:
    int mySqrt(int x) {
        unsigned int  low=1,high=x;
        long middle=0;
        while(low<=high){
            middle=((long)(low+high))/2;
            if(middle*middle==x)
                return middle;
            else if(middle*middle>x){
                high=middle-1;
            }else{
                low=middle+1;
            }
        }
        return high;
    }


};


#endif //NO69_SOLUTION_H
