class Solution {
public:
    vector<vector<int>> ans; // This will store all unique subsets

    void help(vector<int>& nums, vector<int>& st, int i) {
        if (i == nums.size()) { // Base case: if index i is at the end of nums
            ans.push_back(st);  // Add the current subset st to the result
            return;             // Return to previous state
        }

        // Include the current element
        st.push_back(nums[i]);
        help(nums, st, i + 1);

        // Exclude the current element andd Skip over duplicate elements
        st.pop_back();
        while (i+1<nums.size() && nums[i]==nums[i+1])  i++;
        
        help(nums, st, i + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<int> st; 
        help(nums, st, 0); 
        return ans; 
    }
};
