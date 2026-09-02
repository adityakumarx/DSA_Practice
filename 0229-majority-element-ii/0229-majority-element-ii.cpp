//using two pointer like approach
class Solution
{
public:
	vector<int> majorityElement(vector<int>& arr)
	{
		vector<int> result;
		int cnt1 = 0;
		int cnt2 = 0;
		int el1=INT_MIN;
		int el2=INT_MIN;
		for (size_t i{ 0 };i < size(arr);++i)
		{
			if (cnt1 == 0 && el2 != arr[i])
			{
				el1 = arr[i];
				cnt1++;
			}
			else if (cnt2 == 0 && el1 != arr[i])
			{
				el2 = arr[i];
				cnt2++;
			}
			else if (el1 == arr[i])
				cnt1++;
			else if (el2 == arr[i])
				cnt2++;
			else
			{
				cnt1--;
				cnt2--;
			}
		}
		cnt1 = 0;
		cnt2 = 0;
		for (size_t i{ 0 };i < size(arr);++i)
		{
			if (arr[i] == el1)
				cnt1++;
			if (arr[i] == el2)
				cnt2++;
		}
		if (cnt1 > int(size(arr) / 3))
			result.push_back(el1);
		if (cnt2 > int(size(arr) / 3))
			result.push_back(el2);

		return result;
	}
};