class Solution {
public:
    int smallestDivisor(vector<int>& arr, int j) {
        int low = 1;
        int high = INT_MIN;
        for (int k = 0;k < arr.size();++k)
        {
            high = max(high, arr[(size_t)k]);
        }
        if (j == arr.size())
            return high;
        int ans = high;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int temp{ 0 };
            for (int i = 0;i < arr.size();++i)
            {
                if ((float)arr[(size_t)i] / mid > arr[(size_t)i] / mid)
                    temp += arr[(size_t)i] / mid + 1;
                else
                    temp += arr[(size_t)i] / mid;
            }
            if (temp > j)
                low = mid + 1;
            else if (temp <= j)
            {
                ans = min(mid, ans);
                high = mid - 1;
            }
        }
        return ans;
    }
};