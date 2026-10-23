class Solution {
public:
    int removeDuplicates(vector<int>& nums)
{
    if (nums.empty()) return 0;
	size_t i = 0;
	for (size_t j = 1;j < size(nums);++j)
	{
		if (nums[j] != nums[i])
		{
			++i;
			nums[i] = nums[j];
		}
	}
    return i+1;
}
};