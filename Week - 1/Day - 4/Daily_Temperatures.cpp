class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        int n=temp.size();
        stack<pair<int,int>> data; 
        vector<int> result(n);

        data.push({temp[n-1],n-1});

        for(int j=n-2;j>=0;j--){
            auto it=data.top();
            while(data.size()!=0 && it.first<=temp[j]){
                data.pop();

                if(data.size()!=0)
                    it=data.top();
            }


            if(data.size()==0){
                data.push({temp[j],j});
                result[j]=0;
            }
            else{
                it = data.top();
                data.push({temp[j],j});
                result[j]=it.second-j;
            }
        }

        return result;
    }
};
