class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=1)
            return false;

        unordered_set<int> map;

        for(auto it:nums){
            if(map.find(it)!=map.end())
                return true;
            map.insert(it);
        }

        return false;

    }
};
