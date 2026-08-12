class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t n = size(nums);
        int sum;
        vector<pair<int,int>> numWithIndex;
        for(size_t i{0};i<n;++i)
        {
            numWithIndex.push_back({nums[i],static_cast<int>(i)});
        }
        size_t left = 0;
        size_t right = n-1;
        sort(numWithIndex.begin(),numWithIndex.end());
        while(left<right)
        {
            sum = numWithIndex[left].first+numWithIndex[right].first;
            if(sum>target)
            {
                --right;
                continue;
            }
            if(sum<target)
            {
                ++left;
                continue;
            }
            if(sum==target)
            {
                return {numWithIndex[left].second,numWithIndex[right].second};
            }
        }
        return {-1,-1};
    }
};