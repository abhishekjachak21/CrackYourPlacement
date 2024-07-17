//hashing
//17 july - day3 of challenge

//1. Two Sum


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mp.count(complement)) {    //.count() method
                return {mp[complement], i};    //vector aise bhi return kiya jata h bhai
            }
            mp[nums[i]] = i;
        }

        return {};
    }
};