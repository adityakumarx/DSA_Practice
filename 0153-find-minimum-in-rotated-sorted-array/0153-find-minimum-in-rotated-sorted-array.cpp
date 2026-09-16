class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;
        int result = 0;
        while(low<=high)
        {
             int mid = (low+high)/2;
             if(mid!=0 && arr[mid-1]>arr[mid])
             return arr[mid];
             else if(arr[0]<=arr[mid])
             {
                low = mid+1;
             }
             else
             high = mid-1;
        }
        result = arr[0];
        return result;
    }
};