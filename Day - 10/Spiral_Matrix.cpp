class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return {};

        vector<int> ans;
        int x1=0,x2=matrix.size()-1;
        int y1=0,y2=matrix[0].size()-1;
        
        while(x1<x2 && y1<y2){
            for(int j=y1;j<=y2;j++){
                ans.push_back(matrix[x1][j]);
            }


            for(int i=x1+1;i<=x2;i++){
                ans.push_back(matrix[i][y2]);
            }

            for(int j=y2-1;j>=y1;j--){
                ans.push_back(matrix[x2][j]);
            }

            for(int i=x2-1;i>x1;i--){
                ans.push_back(matrix[i][y1]);
            }

            y1++;
            y2--;
            x1++;
            x2--;
        }

        if(x1==x2 && y1<y2){
            for(int i=y1;i<=y2;i++)
                ans.push_back(matrix[x1][i]);
        }
        else if(x1<x2 && y1==y2){
            for(int i=x1;i<=x2;i++)
                ans.push_back(matrix[i][y2]);
        }
        else if(x1==x2 && y1==y2){
            ans.push_back(matrix[x1][y1]);
        }

        return ans;
    }
};
