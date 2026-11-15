class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            int left{(j>0)?mat[i][j-1]:-1};
            int right{(j<mat[0].size()-1)?mat[i][j+1]:-1};
            int bottom{(i<mat.size()-1)?mat[i+1][j]:-1};
            int top{(i>0)?mat[i-1][j]:-1};
            if(mat[i][j]>left && mat[i][j]>right && mat[i][j]>top && mat[i][j]>bottom)
                return {i,j};
        }
    }
    return {-1,-1};
}

};