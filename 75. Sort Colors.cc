//Dutch National Flag algorithm


class Solution {
public:
    void sortColors(vector<int>& nums) {   //Dutch National Flag algorithm
    int low = 0, mid = 0, high = nums.size() - 1;
     
     while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        } else if (nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
            //mid++;  yeh thoda confuse kar sakta hai
        } else {
            mid++;
        }
    }
}
};

