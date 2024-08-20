class Solution {
public:
    int flag=0;
    vector<int> ele;

    string encode(vector<string>& strs) {
        if(strs.size()==0){
            flag=1;            
            return "";
        }

        flag=0;

        string ans=strs[0];
        ele.push_back(strs[0].size());

        for(int i=1;i<strs.size();i++){
            ans+=" "+strs[i];
            ele.push_back(strs[i].size());
        }

        return ans;
    }

    vector<string> decode(string s) {
        if(flag)
            return {};
        
        if(s.size()==0)
            return {""};

        vector<string> ans;
        string temp="";
        int count=0;

        for(int i=0;s[i]!='\0';i++){
            if(ele[count]==0){
                ans.push_back(temp);
                temp="";
                count++;
            }
            else{
                temp+=s[i];
                ele[count]--;
            }
        }

        ans.push_back(temp);

        return ans;

    }
};
