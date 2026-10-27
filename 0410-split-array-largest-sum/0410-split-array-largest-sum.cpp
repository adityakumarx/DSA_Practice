class Solution {
public:
    int canWePaint(vector<int>& nums,int k,int mid)
    {
        int currSum = 0;
        int count = 1;
        for(size_t i=0;i<nums.size();i++)
        {
            if(currSum+nums[i] <= mid)
            currSum+=nums[i];
            else
            {
                currSum = nums[i];
                count++;
            }
        }
            if(count<=k)
            return true;
            return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = 0;
        for(int num : nums)
        {
            high+=num;
        }
        if(k==nums.size())
        return low;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(canWePaint(nums,k,mid))
            {
                high = mid-1;
            }
            else
            low = mid+1;
        }
        return low;
    }
};