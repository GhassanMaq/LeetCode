class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    std::vector<int> dp(amount + 1, amount + 1);
    dp[0]=0;
    for(int i=1 ;i <amount +1 ;i++){
        for (int c=0;c<coins.size();c++){
            if(i - coins[c]>=0){
                dp[i]=std::min(dp[i],1+dp[i-coins[c]]);
            }
        }
    }
    if(dp[amount]!=amount+1) return dp[amount];
    return -1;
    }
};