class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = INT_MIN;
        long long total=0;
        for(int num : piles)
        {
            high = max(num,high);
            total+=num;
        }
        if(total<=h)
        return 1;
        if(piles.size()==h)
        return high;
        int ans=-1;
        while(low<=high)
        {
            int mid=(high+low)/2;
            long long totalSum=0;
            for(int nums : piles)
            {
                totalSum+=(mid+nums-1)/mid;
            }
            if(totalSum<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};