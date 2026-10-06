class Solution
{
    public:
    bool checkDivisor(vector<int>& arr,int j,int mid)
    {
        int sum{0};
        for(int num : arr)
        {
            sum = sum + (num+mid-1)/mid;
            if(sum>j)
            return false;
        }
        if(sum<=j)
        return true;
        return false;
    }
    int smallestDivisor(vector<int>& arr,int j)
    {
        int low = 1;
        int high = INT_MIN;
        long long total{0};
        for(int num : arr)
        {
            total+=num;
            high = max(high,num);
        }
        if(j>=total)
        return 1;
        if(j==arr.size())
        return high;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(checkDivisor(arr,j,mid))
            {
            high = mid-1;
            ans=mid;
            }
            else
            low = mid+1;
        }
        return ans;
    }
};