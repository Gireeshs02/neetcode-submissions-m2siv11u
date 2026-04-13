class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (target == nums[m])
                return m;
            if (nums[m] > target) 
                r = m - 1;
            else 
                l = m + 1;
        }
        return l;
    }
};