class Solution {
public:
    int arr[101];

    int help(vector<int>& cost,int n){
        if(n<=1)
            return cost[n-1];

        int ele;
        if(arr[n-1]!=0)
            ele=arr[n-1];
        else
            ele=help(cost,n-1);

        int ele2;
        if(arr[n-2]!=0)
            ele2=arr[n-2];
        else
            ele2=help(cost,n-2);

        
        arr[n]=min(ele,ele2)+cost[n-1];
        
        return arr[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        cost.push_back(0);
        memset(arr,0,sizeof(arr));
        int ans=help(cost,n+1);
        return ans;
    }
};
