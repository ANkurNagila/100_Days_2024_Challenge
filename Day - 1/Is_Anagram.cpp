class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        
        vector<int> arr(26);

        for(auto it:s){
            arr[it-'a']++;
        }

        for(auto it:t){
            if(arr[it-'a']==0)
                return false;
            arr[it-'a']--;
        }
        
        return true;
    }
};
