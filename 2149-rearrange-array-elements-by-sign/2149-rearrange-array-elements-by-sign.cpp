class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr)
{
	vector<int> l(arr.size());
	size_t positive=0;
	size_t negative=1;
	for (size_t i{ 0 };i < size(arr);++i)
	{
		if (arr[i] > 0)
		{
			l[positive] = arr[i];
			positive += 2;
		}
		else if (arr[i] < 0)
		{
			l[negative] = arr[i];
			negative += 2;
		}
	}
	return l;
}
};