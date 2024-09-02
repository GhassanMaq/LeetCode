class Solution {
public:
    int helper(vector<int>& nums) {
        int r1 = 0, r2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = std::max(nums[i] + r1, r2);
            r1 = r2;
            r2 = temp;
        }
        return r2;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return std::max(nums[0], nums[1]);
        vector<int> nums1(nums.begin(), nums.end() - 1);
        vector<int> nums2(nums.begin() + 1, nums.end()); 
        return std::max(helper(nums1), helper(nums2));
    }
};
