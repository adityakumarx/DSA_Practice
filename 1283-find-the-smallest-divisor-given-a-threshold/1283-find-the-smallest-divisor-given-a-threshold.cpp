class Solution
{
    public:
    int sumofD(vector<int>& arr,int mid)
    {
        int sum{0};
        for(int i=0;i<arr.size();++i)
        {
        sum+=ceil((double)arr[i]/(double)mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr,int j)
    {
        int low = 1;
        int high = *max_element(arr.begin(),arr.end());
        if(arr.size()==j)
        return high;
        long long total{0};
        for(int num : arr)
        {
            total+=num;
        }
        if(j>=total)
        return 1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(sumofD(arr,mid)<=j)
            {
                high=mid-1;
            }
            else
            low = mid+1;
        }
        return low;
    }
};