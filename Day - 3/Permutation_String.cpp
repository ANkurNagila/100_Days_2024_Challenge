class Solution {
public:
    bool check_this(vector<int> &a,vector<int> &b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])
                return false;
        }

        return true;
    }

    bool checkInclusion(string s2, string s1) {
        vector<int> ans(26);
        vector<int> temp(26);

        int n=s2.size();
        for(int i=0;i<n;i++){
            ans[s1[i]-'a']++;
            temp[s2[i]-'a']++;
        }

        if(check_this(ans,temp))
            return true;

        for(int i=1,j=n;j<s1.size();i++,j++){

            ans[s1[i-1]-'a']--;
            ans[s1[j]-'a']++;

            // cout<<i<<" "<<j<<endl;

            if(check_this(ans,temp))
                return true;
        }

        return false;
        

    }
};
