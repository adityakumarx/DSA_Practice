class Solution {
public:
    int searchInsert(vector<int>& arr,int target)
    {
        if(target<arr[0])
        return 0;
        size_t low = 0;
        size_t high = arr.size() - 1;
        int ans = size(arr);
        while (low <= high)
        {
            size_t mid = (low + high) / 2;
            if (arr[mid] == target)
                return (int)mid;
            else if (arr[mid] > target)
                {
                    high = mid - 1;
                    ans = mid;
                }
            else if (arr[mid] < target)
                low = mid + 1;
        }
        return static_cast<int>(ans);
    }
};