
//283. Move Zeroes

//solved with two pointers apporach used
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;

        for(int j=0;j<nums.size();j++){
            if(nums[j] != 0) 
              swap(nums[i], nums[j]), i++;  //swap if non-zero ele ment comes
        }
    }
};