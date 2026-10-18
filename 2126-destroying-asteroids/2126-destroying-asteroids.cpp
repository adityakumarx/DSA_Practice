class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long masses=mass;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i]<=masses)
            masses+=arr[i];
            else{
                return false;
            }
        }
        return true;
    }
};