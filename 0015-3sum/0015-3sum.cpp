class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr)
    {
        std::sort(arr.begin(),arr.end());
        int n = size(arr);
        vector<vector<int>> result;
        for(int i = 0;i<n;++i)
        {
            if(i>0 && arr[i]==arr[i-1])
            continue;
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = arr[i]+arr[j]+arr[k];
                if(sum == 0)
                {
                    result.push_back({arr[i],arr[j],arr[k]});
                    j++;
                    k--;
                    while(j<k && arr[k]==arr[k+1]) k--;
                    while(j<k && arr[j]==arr[j-1]) j++;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        return result;
    }
};