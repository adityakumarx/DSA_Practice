class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr)
{
    //here we have to print matrix in spiral matrix
    //approach used is checking direction traversed and printing based on that
    //for example if our intial left direction is 0 then we will increase every time we
    //traverse that direction and hence when we go in that direction again we can ignore already tranversed ones
    size_t m = arr.size();
    size_t n = arr[0].size();
    int left = 0, right = static_cast<int>(n) - 1;
    int top = 0, bottom = static_cast<int>(m) - 1;
    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; ++i)
            ans.push_back(arr[static_cast<size_t>(top)][static_cast<size_t>(i)]);
        top++;

        for (int i = top; i <= bottom; ++i)
            ans.push_back(arr[static_cast<size_t>(i)][static_cast<size_t>(right)]);
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; --i)
                ans.push_back(arr[static_cast<size_t>(bottom)][static_cast<size_t>(i)]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; --i)
                ans.push_back(arr[static_cast<size_t>(i)][static_cast<size_t>(left)]);
            left++;
        }
    }
    return ans;
}

};