class Solution {
public:
    vector<vector<int>>ans;
    void help(vector<int>& nums, vector<int>& st, int i){
      
      if(i == nums.size()) {ans.push_back(st); return;}

      //include
      st.push_back(nums[i]);
      help(nums, st, i+1);
      //dont include
      st.pop_back();
      help(nums, st, i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>st;
        help(nums,st,0);
        return ans;
    }
};