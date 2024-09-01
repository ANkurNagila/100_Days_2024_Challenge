class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        vector<int> prefix(n);        
        vector<int> postfix(n);

        prefix[0]=prices[0];
        postfix[n-1]=prices[n-1];

        for(int i=1,j=n-2;i<n;i++,j--){
            prefix[i]=min(prices[i],prefix[i-1]);
            postfix[j]=max(prices[j],postfix[j+1]);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,postfix[i]-prefix[i]);
        }

        return ans;
    }
};
