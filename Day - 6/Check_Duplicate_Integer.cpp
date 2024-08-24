class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int temp=0;

        while(i<nums.size()){
            int ele=nums[i];
            int index=ele-1;

            if(index==i)
                i++;
            else{
                if(nums[index]==nums[i])
                    return nums[i];
                swap(nums[i],nums[index]);
            }
        }

        return -1;
    }
};
