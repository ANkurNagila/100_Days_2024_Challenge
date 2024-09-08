class Solution {
public:
    double distance(int x,int y){
        return sqrt(x*x+y*y);
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto cmp = [](const pair<double, int>& p1, const pair<double, int>& p2) {
            return p1.first > p2.first;  
        };

        priority_queue<pair<double, int>, vector<pair<double, int>>, decltype(cmp)> temp(cmp);
        
        for(int i=0;i<points.size();i++){
            double ele=distance(points[i][0],points[i][1]);
            temp.push({ele,i});
        }

        vector<vector<int>> ans;
        while(k--){
            auto it=temp.top();
            temp.pop();

            ans.push_back(points[it.second]);
        }

        return ans;

    }
};
