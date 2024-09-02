class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unordered_map<int, long long> dp;
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            dp[i] = 0;
            for (int n : nums) {
                if (i - n >= 0) {
                    dp[i] += dp[i - n];
                    if (dp[i] > INT_MAX) {
                        dp[i] = INT_MAX; 
                    }
                }
            }
        }
        return dp[target];
    }
};
