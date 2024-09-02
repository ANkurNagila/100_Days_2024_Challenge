class Solution {
public:
    int findMin(vector<int> &nums) {
        if(nums.size()==1)
            return nums[0];

        int n=nums.size();
        int i=0,j=n-1;

        while(i<j){
            int mid=i+(j-i+1)/2;

            if(nums[i]<nums[j])
                return nums[i];
            else{
                if(nums[i]<nums[mid] && nums[j]<nums[mid]){
                    i=mid+1;
                }
                else if(nums[i]>nums[mid] && nums[j]>nums[mid]){    
                    j=mid;
                }
                else
                    return nums[mid];
            }
        }

        return nums[i];
        
    }
};
