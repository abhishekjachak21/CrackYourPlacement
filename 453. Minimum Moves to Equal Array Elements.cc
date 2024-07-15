class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=INT_MAX;
        for(int n:nums) m = min(m,n);
        int ans=0;
        for(int n:nums) ans+=n-m; //so just min se har ek ka distance naapo, ho gya
        return ans;
    }
};