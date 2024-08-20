class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> x(10,vector<int> (10));
        vector<vector<int>> y(10,vector<int> (10));
        vector<vector<int>> box(10,vector<int> (10));

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if (board[i][j] == '.') continue;

                int ele=board[i][j]-'0';
                int box_number= (j/3) * 3 + (i/3) +1;

                if(x[i+1][ele]==1 || y[j+1][ele]==1 || box[box_number][ele]==1 )
                    return false;
                
                x[i+1][ele]=1;
                y[j+1][ele]=1;
                box[box_number][ele]=1;
            }
        }
        
        return true;
    }
};
