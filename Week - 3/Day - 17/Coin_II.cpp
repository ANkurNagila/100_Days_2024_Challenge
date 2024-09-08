class Solution {
    int dp[301][5001];    
public:
    int help(vector<int> &coins, int n ,int amount){
        if(amount==0){
            return dp[n][amount]=1;
        }

        if(n<=0)
            return 0;

        if(dp[n][amount]!=-1)
            return dp[n][amount];

        int ele=coins[n-1];
        int ans=0;

        if(amount>=ele){
            if(dp[n][amount-ele]==-1)
                dp[n][amount-ele]=help(coins,n,amount-ele);

            if(dp[n-1][amount]==-1)
                dp[n-1][amount]=help(coins,n-1,amount);

            ans+=dp[n][amount-ele]+dp[n-1][amount];

        }
        else{
            if(dp[n-1][amount]==-1)
                dp[n-1][amount]=help(coins,n-1,amount);
            
            ans+=dp[n-1][amount];
        }

        return dp[n][amount]=ans;
        
    }

    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        int n=coins.size();
        int ans=help(coins,coins.size(),amount);
        return dp[n][amount];
    }
};