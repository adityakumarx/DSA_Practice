class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = 0;
        int col = 0;
        int r=mat.size();
        int c=mat[0].size();
        while(row<mat.size() && col<mat[0].size()){
            int left{(col>0)?mat[row][col-1]:-1};
            int right{(col<c-1)?mat[row][col+1]:-1};
            int top{(row>0)?mat[row-1][col]:-1};
            int bottom{(row<r-1)?mat[row+1][col]:-1};
            if(mat[row][col]>left && mat[row][col]>right && mat[row][col]>top && mat[row][col]>bottom){
                return {row,col};
            }
            else if(left>right && left>top && left>bottom && left>mat[row][col])
            col--;
            else if(right>left && right>top && right>bottom && right>mat[row][col])
            col++;
            else if(top>left && top>bottom && top>left && top>mat[row][col])
            row--;
            else
            row++;
        }
        return {-1,-1};
    }
};