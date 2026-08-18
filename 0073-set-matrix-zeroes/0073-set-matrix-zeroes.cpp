class Solution {
public:
    void setZeroes(vector<vector<int>>& arr)
{
	unordered_set<size_t> row;
	unordered_set<size_t> column;
	for (size_t i{ 0 };i < size(arr);++i)
	{
		for (size_t j{ 0 };j < size(arr[i]);++j)
		{
			if (arr[i][j] == 0)
			{
				row.insert(i);
				column.insert(j);
			}
		}
	}
	for (size_t i{ 0 };i < size(arr);++i)
	{
		for (size_t j{ 0 };j < size(arr[i]);++j)
		{
			if (row.contains(i))
				arr[i][j] = 0;
			else if (column.contains(j))
				arr[i][j] = 0;
		}
	}
}
};