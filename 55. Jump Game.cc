class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxIndex=0;   /////bhai sir phod diya iss question ne...

        for(int i=0;i<nums.size();i++){

          if(i>maxIndex)
             return false;   

          maxIndex = max(maxIndex, nums[i]+i);  ///yeh nums[i]+i kyo kiya h, samj ni rha tha
            //but samaj aya ki, vo index deta hai, curr se max reach ki
         
        }

        return true;
    }
};