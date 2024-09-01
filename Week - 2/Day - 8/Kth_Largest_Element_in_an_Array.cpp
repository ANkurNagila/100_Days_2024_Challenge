class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int> x;

        for(auto it:nums)
            x.push(it);

        int i=1;
        while(i<k){
            x.pop();
            i++;
        }
        
        return x.top();
    }
};
