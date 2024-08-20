class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==0)
            return {};

        unordered_map<int,int> help;
        for(auto it:nums){
            help[it]++;
        }

        priority_queue<pair<int,int>> temp;

        for(auto it:help){
            temp.push({it.second,it.first});
        }

        vector<int> ans;

        while(k--){
            ans.push_back(temp.top().second);
            temp.pop();
        }

        return ans;
    }
};
