class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size()<=1)
            return {1};

        vector<int> pre(nums.size()) , post(nums.size());

        int mul_1=1;
        int mul_2=1;

        for(int i=0;i<nums.size();i++){
            int j=nums.size()-i-1;
            mul_1*=nums[i];
            mul_2*=nums[j];

            pre[i]=mul_1;
            post[j]=mul_2;
        }

        vector<int> ans(nums.size());

        for(int i=0;i<nums.size();i++){
            if(i==0){
                ans[i]=post[i+1];
            }
            else if(i==nums.size()-1){
                ans[i]=pre[i-1];
            }
            else{
                ans[i]=pre[i-1]*post[i+1];
            }
        }

        return ans;

    }
};
