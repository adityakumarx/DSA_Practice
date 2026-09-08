class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr)
    {
        if(arr.size()<=1)
        return arr;
        vector<vector<int>> result;
        std::sort(arr.begin(),arr.end());
        vector<int> temp{arr[0][0],arr[0][1]};
        for(size_t i=1;i<=size(arr)-1;++i)
        {
            if(temp[1]>=arr[i][0])
            {
                if(temp[1]<arr[i][1])
                temp[1]=arr[i][1];
                else
                ;
            }
            else
            {
                result.push_back(temp);
                temp[0]=arr[i][0];
                temp[1]=arr[i][1];
            }
        }
        result.push_back(temp);
        return result;
    }
};