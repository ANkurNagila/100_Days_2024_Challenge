class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>> help;
        vector<vector<string>> ans;

        for(auto it:strs){
            string str=it;
            sort(str.begin(),str.end());

            if(!(help.find(str)!=help.end()))
                help[str]={};

            help[str].push_back(it);
        }

        for(auto it:help){
            ans.push_back(it.second);
        }

        return ans;
    }
};
