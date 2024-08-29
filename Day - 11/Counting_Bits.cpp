class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);

        while(ans.size()<=n){
            int x=ans.size();
            for(int i=0;i<x;i++){
                ans.push_back(ans[i]+1);
                if(ans.size()==n+1)
                    break;
            }
        }
        
        return ans;
    }
};
