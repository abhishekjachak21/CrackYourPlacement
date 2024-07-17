//math problem
//power of two


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        while(n%2==0){
            n/=2;
        }
        return n==1;
//      if (n == 1) 
//     return true;
//      else 
//     return false;

//new syntax learnt => return condition; if true wali condition return ke aage likho
    }
};