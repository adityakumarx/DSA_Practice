class Solution {
public:
    void mergeSort(vector<int>& arr, size_t low, size_t high, [[maybe_unused]] int& cnt)
    {
        if (low >= high)
            return;
        size_t mid{ (low + high) / 2 };
        mergeSort(arr, low, mid, cnt);
        mergeSort(arr, mid + 1, high, cnt);
        merge(arr, low, mid, high, cnt);
    }

    void merge(vector<int>& arr, size_t low, size_t mid, size_t high, int& cnt) {
        size_t i = low;
        size_t j = mid + 1;
        for (i;i <= mid;++i)
        {
            while (j <= high && (long long)arr[i]>2LL*arr[j] )
            {
                j++;
            }
            cnt += static_cast<int>(j) - (static_cast<int>(mid) + 1);
        }

        vector<int> temp;
        size_t left = low, right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) temp.push_back(arr[left++]);
            else temp.push_back(arr[right++]);
        }
        while (left <= mid) temp.push_back(arr[left++]);
        while (right <= high) temp.push_back(arr[right++]);

        for (size_t k = low; k <= high; k++) arr[k] = temp[k - low];
    }


    int reversePairs(vector<int>& nums)
    {
        int c = 0;
        mergeSort(nums, 0, size(nums) - 1, c);
        return c;
    }
};