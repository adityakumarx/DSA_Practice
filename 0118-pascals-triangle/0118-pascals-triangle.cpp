class Solution {
public:
    vector<vector<int>> generate(int target)
{
	vector<vector<int>> traingle;
	for (size_t i{ 0 };i < target;++i)
	{
		vector<int> row(i + 1, 1);//temporary row to insert in main traingle
		for (size_t j = 1;j < i;++j)
		{
			row[j] = traingle[i - 1][j - 1] + traingle[i - 1][j];
		}
		traingle.push_back(row);
	}
	return traingle;
}
};