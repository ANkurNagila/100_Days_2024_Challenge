class Solution {
    vector<vector<int>> ans;
public:
    void help(vector<int> &nums,int n,int target,vector<int> &temp){
        if(target==0){
            ans.push_back(temp);
            return ;
        }

        if(n==0){
            return ;
        }

        if(target>=nums[n-1]){
            temp.push_back(nums[n-1]);
            help(nums,n,target-nums[n-1],temp);
            temp.pop_back();

            help(nums,n-1,target,temp);
        }
        else{
            help(nums,n-1,target,temp);
        }

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp={};
        help(nums,nums.size(),target,temp);

        return ans;
    }
};
