class Solution
{
public:
	void moveZeroes(vector<int>& num)
	{
		int j = -1;
		for (size_t i{ 0 };i < size(num);++i)
		{
			if (num[i] == 0)
			{
				j = static_cast<int>(i);
				break;
			}
		}
		if (j == -1)
			return;
		for(size_t i = static_cast<size_t>(j)+1;i<num.size();++i)
		{
			if (num[i] != 0)
			{
				swap(num[static_cast<size_t>(j)], num[i]);
				j++;
			}
		}
	}
};