class Solution {
    int dp[11][10001];

public:
    int help(vector<int> &nums,int n,int amount){
        if(amount==0)
            return 0;

        if(n<=0)
            return INT_MAX;

        int ele=nums[n-1];
        int ans;
        if(amount>=ele){
            int x=help(nums,n,amount-ele);
            int y=help(nums,n-1,amount);

            if(x!=INT_MAX)
                ans=min(x+1,y);
            else
                ans=y;
        }
        else
            ans=help(nums,n-1,amount);
        
        return ans;

    }


    int coinChange(vector<int>& coins, int amount) {
        memset(dp,INT_MAX,sizeof(dp));

        int n=coins.size();
        int ans=help(coins,n,amount);

        if(ans==INT_MAX)
            return -1;

        return ans;

    }
};
