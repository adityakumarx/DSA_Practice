class Solution {
public:
    int majorityElement(vector<int>& arr)
{
	size_t n{ size(arr) };
	size_t count{};
	int element{};
	for (size_t i{ 0 };i < n;++i)
	{
		if (count == 0 && element != arr[i])
		{
			element = arr[i];
		}
		if (element == arr[i])
			++count;
		if (element != arr[i])
		{
			--count;
		}
	}
	return element;
}
};