class Solution{
    public:
    int minDays(vector<int>& bloomDays,int m,int k)
    {
        int  ans = -1;
        long long total = (long long)m*k;
        if(bloomDays.size()<total)
        return ans;
        int low = INT_MAX;
        int high=INT_MIN;
        for(int nums : bloomDays)
        {
            if(low>=nums)
            low = nums;
            if(high<=nums)
            high = nums;
        }
        while(low<=high)
        {
            int mid = (low+high)/2;
            int temp = 0;
            int b = 0;
            for(int j=0;j<bloomDays.size();++j)
            {
                if(bloomDays[j]<=mid)
                temp++;
                else
                temp = 0;
                if(temp>=k)
                {
                    b++;
                    temp=0;
                }
            }
            if(b>=m)
            {
                ans = mid;
                high = mid-1;
            }
            else
            low = mid+1;
        }
        return ans;
    }
};