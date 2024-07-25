//run time error ka challenges faced

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxi = INT_MIN;
        int n = nums.size();
        int prod1 = 1;
        int prod2 = 1;

        for(int i=0;i<nums.size();i++){
            if( prod1 == 0 ) prod1 = 1;
            if( prod2 == 0 ) prod2 = 1;

            prod1 *= nums[i];
            prod2 *= nums[n-i-1];
            maxi = max (maxi,max(prod1,prod2));

        }
        return maxi;
    }
};