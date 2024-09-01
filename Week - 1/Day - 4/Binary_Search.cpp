class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
            return -1;

        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i+1)/2;
            cout<<i<<" "<<j<<endl;

            if(nums[mid]>target)
                j=mid-1; 
            else if(nums[mid]<target)
                i=mid+1;
            else
                return mid;
            
        }

        return -1;
    }
};
