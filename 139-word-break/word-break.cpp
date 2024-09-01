class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size() + 1, false);
        dp[s.size()] = true;
        for(int i = s.size(); i >= 0; i--) {
            for(int c = 0; c < wordDict.size(); c++) {
                if (i + wordDict[c].size() <= s.size() && s.substr(i, wordDict[c].size()) == wordDict[c]) {
                    dp[i] = dp[i + wordDict[c].size()];
                }
                if(dp[i]) break;
            }
        }
        return dp[0];
    }
};
