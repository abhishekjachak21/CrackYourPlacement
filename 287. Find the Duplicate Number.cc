// 287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
               sort(nums.begin(), nums.end());
        for(int j=0;j<nums.size()-1;j++){
           
            if(nums[j]==nums[j+1]) {
                return nums[j];
                break;
            }
        
        }
        return 0;
    }
};