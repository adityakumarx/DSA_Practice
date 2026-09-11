class Solution{
    public:
    int search(vector<int>& arr,int target)//timecomplexity here is o(logn)
    {
        int low{0};
        int n = (int)size(arr);
        int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid]==target)
            return mid;
            else if(arr[mid]>target)
            high = mid-1;
            else
            low = mid+1;
        }
        return -1;
    }
};