class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one{};
        int maxOnes{};
        for(size_t i{0};i<nums.size();++i)
        {
            if(nums[i]==1)
            one++;
            else if(nums[i] == 0)
            one = 0;

            maxOnes = max(one,maxOnes);
        }
        return maxOnes;
        
    }
};