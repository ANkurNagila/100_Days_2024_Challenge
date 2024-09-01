class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;

        priority_queue<int> x;
        for(auto it:nums)
            x.push(it); 

        int ans=1;
        int count=0;
        int prev=INT_MAX;
        while(x.size()!=0){
            if(prev-1==x.top())
                count++;
            else if(prev==x.top()){
                x.pop();
                continue;
            }
            else{
                ans=max(count,ans);
                count=1;
            }

            prev=x.top();
            //cout<<prev<<endl;
            x.pop();
        }

        ans=max(count,ans);

        return ans;
    }
};
