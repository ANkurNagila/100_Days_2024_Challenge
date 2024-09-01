class Solution {
public:
    void reverse(vector<int> &num,int n){
        if(n<=1)
            return ;
        
        for(int i=0,j=n-1;i<j;i++,j--){
            swap(num[i],num[j]);
        }
    }

    vector<int> plusOne(vector<int>& nums) {
        int n=nums.size();
        reverse(nums,n);
        int rem=1;

        for(int i=0;i<n;i++){
            int sum=rem+nums[i];
            nums[i]=sum%10;
            rem=sum/10;
        }

        if(rem){
            nums.push_back(rem);
            n++;
        }
        
        reverse(nums,n);
        return nums;
    }
};
