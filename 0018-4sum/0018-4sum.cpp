class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr,int target)
    {
        vector<vector<int>> result;
        std::sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();++i)
        {
            if(i>0 && arr[i]==arr[i-1])
            continue;
            for(int j=i+1;j<arr.size();++j)
            {
                if(j>i+1 && arr[j]==arr[j-1])
                continue;
                int k=j+1;
                int l=arr.size()-1;
                while(k<l)
                {
                    long sum = static_cast<long>(arr[i])+arr[j]+arr[k]+arr[l];
                    if(sum==target)
                    {
                        result.push_back({arr[i],arr[j],arr[k],arr[l]});
                        l--;
                        k++;
                        while(arr[l]==arr[l+1] && k<l) l--;
                        while(arr[k]==arr[k-1] && k<l) k++;
                    }
                    else if(sum<target) k++;
                    else l--;
                }
            }
        }
        return result;
    }

};