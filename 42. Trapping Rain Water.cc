class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n);  //see size
        vector<int> rmax(n);
        lmax[0] = height[0];  //see initializn
        rmax[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            lmax[i] = max(lmax[i-1], height[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            rmax[i] = max(rmax[i+1], height[i+1]);
        }
        int waterTrapped=0;
        for(int i=0;i<n;i++){
            int curr = min(rmax[i], lmax[i])-height[i] ;   //see used min here
            if(curr>0) waterTrapped += curr;     //only take +ve val
        }
        return waterTrapped;
    }
};