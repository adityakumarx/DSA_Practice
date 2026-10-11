class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long sum = 0;
        for (int num : weights) {
            sum += num;
        }
        int low{*max_element(weights.begin(),weights.end())};
        int high{ (int)sum };
        int cap = high;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int day = 0;
            int temp = mid;
            for (size_t i = 0;i < weights.size();++i)
            {
                if (temp < weights[i])
                {
                    temp = mid;
                    ++day;
                }
                temp -= weights[i];
                if (i == weights.size() - 1)
                    day++;
            }
            if (day > days)
                low = mid + 1;
            else if (day <= days)
            {
                high = mid - 1;
                cap = min(cap, mid);
            }
        }
        return cap;
    }
};