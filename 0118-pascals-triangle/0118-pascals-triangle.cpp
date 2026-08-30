class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> traingle;
        for(int n{0};n<numRows;++n)
        {
            vector<int> row;
            row.push_back(1);
            for(int r{1};r<n+1;++r)
            {
                row.push_back((row[static_cast<size_t>(r)-1]*(n-r+1))/r);
            }
            traingle.push_back(row);
        }
        return traingle;
    }
};