class Solution {
public:
    int singleNonDuplicate(vector<int>& arr)
{
    if (arr.size()==0)
    return 0;
    int result{0};
    if(arr.size()==1)
    return arr[0];
    int low = 0;
    int high = arr.size()-1;
    if(arr[high]!=arr[high-1])
    return arr[high];
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(mid!=0 && arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
        return arr[mid];
        else if(mid==0 && arr[mid]!=arr[mid+1])
        return arr[mid];
        else if(mid%2 == 0)
        {
            if(arr[mid]!=arr[mid+1])
            high = mid-1;
            else
            low = mid+1;
        }
        else if(mid%2 != 0)
        {
            if(arr[mid]==arr[mid+1])
            high = mid-1;
            else
            low = mid+1;
        }
    }
    return 0;
}
};