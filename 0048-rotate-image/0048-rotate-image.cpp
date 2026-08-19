class Solution {
public:
    void rotate(vector<vector<int>>& arr)
{
	if (arr.empty())
		return;
	size_t n{ arr.size() };
	for (size_t i{0};i < size(arr) / 2;++i)
	{
		for (size_t j{ 0 };j+2*i < size(arr)-1;++j)
		{
			swap(arr[i][j+i], arr[j+i][n - 1-i]);
			swap(arr[n-1-j-i][i], arr[i][j+i]);
			swap(arr[n-1-i][n-1-j-i], arr[n-1-j-i][i]);
		}
	}
}
};