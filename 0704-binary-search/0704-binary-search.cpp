class Solution{
    public:
    int search(vector<int>& arr,int target)
    {
        int n = size(arr)-1;
        if(n<=2)
        {
            for(int i = 0;i<=n;++i)
            {
                if(arr[i]==target)
                return i;
            }
            return -1;
        }
        int index{-1};
        int low{0};
        int high{n};
        int mid{(low+high)/2};
        while(low<mid && mid<high)
        {
            if(arr[low]==target)
            return low;
            else if(arr[high]==target)
            return high;
            if(target==arr[mid])
            {
                index = mid;
                break;
            }
            else if(target>arr[mid])
            {
                low = mid;
                mid = (low+high)/2;
            }
            else{
                high = mid;
                mid = (low+high)/2;
            }
        }
        return index;
    }
};