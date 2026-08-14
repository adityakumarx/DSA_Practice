class Solution {
public:
    int maxProfit(vector<int>& arr)
    {
        int profit{0};
        size_t min{0};
        for(size_t i{0};i<size(arr);++i)
        {
            if(arr[i]>arr[min])
            {
                profit = max(arr[i]-arr[min],profit);
            }
            if(arr[min]>arr[i])
            {
                min = i;
            }
        }
        return profit;
    }
};