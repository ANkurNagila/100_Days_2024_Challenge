class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> temp;
        temp.push_back(0);
        int ele=0;

        for(auto it:arr){
            ele^=it;
            temp.push_back(ele);
        }
        
        vector<int> ans;
        for(auto it:queries){
            int i=it[0];
            int j=it[1];

            ans.push_back(temp[i]^temp[j+1]);
        }

        return ans;
        
    }
};