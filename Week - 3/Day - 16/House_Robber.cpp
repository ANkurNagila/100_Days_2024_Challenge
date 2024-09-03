class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;

        vector<int> ans;
        ans.push_back(0);
        ans.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){
            int ele1=ans[i-1];
            int ele2=ans[i];

            ans.push_back(max(ele1+nums[i],ele2));
        }

        return ans[nums.size()];
    }
};
