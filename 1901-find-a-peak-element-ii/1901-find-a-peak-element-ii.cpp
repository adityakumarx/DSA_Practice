class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int low = 0;
        int high = c-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int max = INT_MIN;
            int maxInd = 0;
            for(int i = 0;i<r;i++){
                if(mat[i][mid]>=max)
                {
                    max = mat[i][mid];
                    maxInd = i;
                }}
                int left{(mid>0)?mat[maxInd][mid-1]:-1};
                int right{(mid<c-1)?mat[maxInd][mid+1]:-1};
                if(max>left && max>right)
                return {maxInd,mid};
                else if(right>max)
                low = mid+1;
                else if(left>max)
                high = mid-1;
        }
        return {-1,-1};
    }
};