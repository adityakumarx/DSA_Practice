class Solution {
public:
    int subarraySum(vector<int>& arr, int k)
{
	int prefixSum{};
	int cnt{0};
	unordered_map<int, int> mpp;
    mpp[0] = 1;
	for (size_t i{ 0 };i < size(arr);++i)
	{
		prefixSum += arr[i];
		if (mpp.contains(prefixSum - k))
			cnt = cnt + mpp[prefixSum - k];
		mpp[prefixSum]++;
	}

	return cnt;
}
};