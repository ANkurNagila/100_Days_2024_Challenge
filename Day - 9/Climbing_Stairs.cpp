class Solution {
public:
    int arr[31];

    Solution(){
        memset(arr,0,sizeof(arr));
        arr[1]=1;
        arr[2]=2;
    }

    int climbStairs(int n) {
        if(n==1)
            return 1;

        if(arr[n]!=0)
            return arr[n];
        
        arr[n]=climbStairs(n-2)+ climbStairs(n-1);
        
        return arr[n];
    }
};
