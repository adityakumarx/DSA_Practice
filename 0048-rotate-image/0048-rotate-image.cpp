class Solution {
public:
    void rotate(vector<vector<int>>& arr)
{
	if (arr.empty())
		return;
	[[maybe_unused]] size_t n{ arr.size() };
	for (size_t i{ 0 };i < size(arr);++i)
	{
		for (size_t j{ i };j < size(arr);++j)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	for (size_t i{ 0 };i < size(arr);++i)
	{
		reverse(arr[i].begin(), arr[i].end());
	}
}
};