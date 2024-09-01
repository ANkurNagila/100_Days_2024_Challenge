class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        if(matrix.size()==0)
            return ;

        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

    void reverse(vector<vector<int>>& matrix){
        if(matrix.size()==0)
            return ;

        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }

    }

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
    }
};
