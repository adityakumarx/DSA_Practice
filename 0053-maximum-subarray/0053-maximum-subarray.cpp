class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int sum;
        for(size_t i{0};i<size(nums);++i)
        {
            sum+=nums[i];
            if(sum>max)
            {
                max = sum;
            }
            if(sum<0)
            {
                sum = 0;
            }
        }
        return max;
    }
};