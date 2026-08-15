class Solution {
public:
    void nextPermutation(vector<int>& arr)
{
	if (size(arr) == 1)
		return;
	size_t breakpoint{};
	size_t min{};
	bool found{ false };
	for (size_t i{ size(arr) - 2 };i >= 0;--i)
	{
		if (arr[i] < arr[i + 1])
		{
			found = true;
			breakpoint = i;
			min = i + 1;
			for (size_t r{ i + 1 };r < size(arr);++r)
			{
				if (arr[r] > arr[breakpoint] && arr[min] >= arr[r])
					min = r;
			}
			swap(arr[breakpoint], arr[min]);
			sort(arr.begin() + static_cast<int>(i) + 1, arr.end());
			break;
		}
		if (i == 0)
			break;
	}
	if (!found)
		sort(arr.begin(), arr.end());
}
};