class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> map;
        
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;

            int ele=nums[i];
            while(j<k){
                int temp=ele+nums[j]+nums[k];
                if(temp>0){
                    k--;
                }
                else if(temp<0){
                    j++;
                }
                else{
                    if(!(map.find({nums[i],nums[j],nums[k]})!=map.end()))
                        ans.push_back({nums[i],nums[j],nums[k]});
                    
                    map.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }

        return ans;
    }
};
