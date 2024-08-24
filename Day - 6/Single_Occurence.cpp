class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ele=0;

        for(auto it:nums)
            ele=ele^it;

        return ele;
    }
};
