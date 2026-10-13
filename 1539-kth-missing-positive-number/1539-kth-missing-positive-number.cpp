class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr.size()==arr[arr.size()-1])
        return k+arr.size();
        int low = 0;
        int high = arr.size()-1;
        int ans=-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid]-mid-1>=k)
            {
                high = mid-1;
                ans = mid;
            }
            else
            low = mid+1;
        }
        if(ans==0)
        {
            return k;
        }
        else if(ans==-1)
        {
            ans = arr[arr.size()-1] + (k-(arr[arr.size()-1]-arr.size()));
        }
        else{
            ans = arr[ans-1]+(k-(arr[ans-1]-ans));
        }
        return ans;
    }
};