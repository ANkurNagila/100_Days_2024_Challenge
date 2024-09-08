class Solution {
    int ans[2][100];
public:
    int help(vector<int> &nums,int n,int flag){
        if(n==0){
            if(flag==1)
                return 0;
            else
                return ans[0][0]=nums[0];
        }

        int ele,ele2;
        if(n-2>=0 && ans[flag][n-2]==0)
            ele=help(nums,n-2,flag)+nums[n];
        else
            ele=ans[flag][n-2]+nums[n];
        
        if(n-1>=0 && ans[flag][n-1]==0)
            ele2=help(nums,n-1,flag);
        else
            ele2=ans[flag][n-1];

        return ans[flag][n]=max(ele,ele2);
    }

    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        if(nums.size()==1)
            return nums[0];

        memset(ans,0, 2*100*(sizeof(int)));

        int n=nums.size();
        int ele=help(nums,n-3,1)+nums[n-1];
        int ele2=help(nums,n-2,0);
        cout<<ele<<" "<<ele2<<endl;

        return max(ele,ele2);
    }
};
