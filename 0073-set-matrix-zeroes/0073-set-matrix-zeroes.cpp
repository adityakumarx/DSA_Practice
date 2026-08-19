class Solution {
public:
    void setZeroes(vector<vector<int>>& arr)
{
	if (arr.empty())
		return;

	size_t a{ arr.size() };
	size_t b{ arr[0].size() };

	bool rowFlag{ false };
	bool columnFlag{ false };

	for (size_t i{ 0 };i < a;++i)
	{
		if (arr[i][0] == 0)
        {
			rowFlag = true;
            break;
        }
	}

	for (size_t j{ 0 };j < b;++j)
	{
		if (arr[0][j] == 0)
        {
			columnFlag = true;
            break;
        }
	}

	for (size_t i{ 1 };i < a;++i)
	{
		for (size_t j{ 1 };j < b;++j)
		{
			if (arr[i][j] == 0)
			{
				arr[0][j] = 0;
				arr[i][0] = 0;
			}
		}
	}
	for (size_t i{ 1 };i < a;++i)
	{
		for (size_t j{ 1 };j < b;++j)
		{
			if (arr[i][0] == 0 || arr[0][j] == 0)
			{
				arr[i][j] = 0;
			}
		}
	}
	if (rowFlag)
	{
		for (size_t i{ 0 };i < a;++i)
		{
			arr[i][0] = 0;
		}
	}
	if (columnFlag)
	{
		for (size_t j{ 0 };j < b;++j)
		{
			arr[0][j] = 0;
		}
	}
}
};