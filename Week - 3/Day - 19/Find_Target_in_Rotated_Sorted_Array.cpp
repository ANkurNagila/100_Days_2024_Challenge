class Solution {
public:
    int findmin(vector<int> &nums){
        if(nums.size()==1)
            return nums[0];

        int n=nums.size();
        int i=0,j=n-1;

        while(i<j){
            int mid=i+(j-i+1)/2;

            if(nums[i]<nums[j])
                return i;
            else{
                if(nums[i]<nums[mid] && nums[j]<nums[mid]){
                    i=mid+1;
                }
                else if(nums[i]>nums[mid] && nums[j]>nums[mid]){    
                    j=mid;
                }
                else
                    return mid;
            }
        }

        return i;
    }

    int binary_Search(vector<int>& nums,int i,int j,int target){
        
        while(i<=j){
            int mid=i+(j-i+1)/2;

            if(nums[mid]<target){
                i=mid+1;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                return mid;
            }
        }

        return -1;
    }


    int search(vector<int>& nums, int target) {
        int ele=findmin(nums);
        int i=ele,j=nums.size()-1;

        int ans=binary_Search(nums,i,j,target);
        if(ans!=-1)
            return ans;

        ans=binary_Search(nums,0,ele-1,target);
        return ans;
        

    }
};