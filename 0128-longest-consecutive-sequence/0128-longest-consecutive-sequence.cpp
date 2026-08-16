class Solution {
public:
        int longestConsecutive(vector<int>& arr)
{
	size_t n{ size(arr) };
	if (n == 0) return 0;
	if (n == 1) return 1;
	int longest = 1;
	unordered_set<int> l;
	for (size_t i{ 0 };i < n;++i)
	{
		l.insert(arr[i]);
	}
	for (auto it : l)
	{
		if (l.contains(it - 1))
		{
		}
		else
		{
			int cnt = 1;
			int x = it;
			while (l.contains(x + 1))
			{
				cnt++;
				x++;
			}
			longest = max(longest, cnt);
		}
	}
	return longest;
}
};