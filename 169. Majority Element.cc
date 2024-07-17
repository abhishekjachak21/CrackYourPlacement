//solved using hashmap

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = nums.size()/2;
    
        unordered_map<int, int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        for (auto it:nums)  mp[it]++; //har baar for loop mat istemaal karo

        for(auto it:mp) if(it.second>freq) return it.first;

        return -1;
    }
};