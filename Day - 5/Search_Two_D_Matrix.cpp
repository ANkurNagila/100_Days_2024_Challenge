class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_i=0,row_j=matrix.size()-1;
        int tar=0;

        cout<<row_i<<" "<<row_j<<endl;
        while(row_i<row_j){
            int mid=row_i+(row_j-row_i+1)/2;

            if(matrix[mid][0]<target){
                row_i=mid;
                if(mid==matrix.size()-1 || matrix[mid+1][0]>target){
                    tar=mid;
                    break;
                }
            }
            else if(matrix[mid][0]>target){
                row_j=mid-1;
            }
            else
                return true;
        }

        int i=0,j=matrix[0].size()-1;
        while(i<=j){
            int mid=i+(j-i+1)/2;

            if(matrix[tar][mid]>target)
                j=mid-1; 
            else if(matrix[tar][mid]<target)
                i=mid+1;
            else
                return true;
        }

        cout<<tar<<endl;

        return false;
    }
};
