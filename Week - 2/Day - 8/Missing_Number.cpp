class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(i!=nums[i])
                return i;
        }

        return nums.size();
    }
};
