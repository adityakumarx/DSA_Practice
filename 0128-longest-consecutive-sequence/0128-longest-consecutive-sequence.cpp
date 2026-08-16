class Solution {
public:
        int longestConsecutive(vector<int> arr)
{
	if (arr.size() == 1)
		return 1;
	if (arr.empty())
		return 0;
	sort(arr.begin(), arr.end());
	int count{1};
	int maxCount{0};
	for (size_t i{ 0 };i < size(arr)-1;++i)
	{
		if (arr[i] + 1 == arr[i + 1])
			++count;
		else if ((arr[i] == arr[i + 1]))
		{
		}
		else if(arr[i]+1!=arr[i+1])
			count = 1;

		maxCount = max(count, maxCount);
	}
	return maxCount;
}
};