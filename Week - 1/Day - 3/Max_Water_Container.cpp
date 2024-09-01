class Solution {
public:
    int maxArea(vector<int>& nums) {

        if(nums.size()<=1)
            return 0;

        int ans=0;
        int i=0,j=nums.size()-1;

        while(i<j){
            int ele=min(nums[i],nums[j])*(j-i);
            ans=max(ans,ele);

            if(nums[i]<nums[j])
                i++;
            else
                j--;
        }

        return ans;
        
    }
};
