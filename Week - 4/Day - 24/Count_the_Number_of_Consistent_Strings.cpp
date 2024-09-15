class Solution {
public:
    int compare_words(vector<int> &a,vector<int> &b){
        for(int i=0;i<26;i++){
            if(a[i]==0 && b[i]!=0)
                return 0;
        }

        return 1;
    }

    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> visited(26);

        for(auto it:allowed){
            int ele=it-'a';
            visited[ele]++;
        }
        
        int ans=0;

        for(int i=0;i<words.size();i++){
            vector<int> arr(26);
            for(auto it:words[i]){
                int x=it-'a';
                arr[x]++;
            }

            ans+=compare_words(visited,arr); 
        }

        return ans;
    }
};