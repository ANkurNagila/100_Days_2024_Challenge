class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0;
        int count=0,ans=0;
        unordered_map<char,int> map;

        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end()){
                if(map[s[i]]>j){
                    j=map[s[i]]+1;
                }
                else if(map[s[i]]==j){
                    j++;
                }
            }
            
            map[s[i]]=i;
            count=i-j+1;
            ans=max(ans,count);
            

            /*cout<<count<<" ";
            for(int temp=j;temp=i;temp++)
                cout<<s[temp];
            cout<<endl;*/

        }

        return ans;
    }
};
