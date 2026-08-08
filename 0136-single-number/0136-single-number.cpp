class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xors{};
        for(size_t i{0};i<nums.size();++i)
        {
            xors ^= nums[i];
        }
        return xors;
    }
};