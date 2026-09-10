class Solution{
    public:
    int maxProduct(vector<int>& arr)
    {
        int result{INT_MIN};
        int product = 1;
        for(int i = 0;i<arr.size();++i)
        {
            if(arr[i]==0){
            if(result<0)
            result = 0;
            product = 1;
            }
            else{
            product*=arr[i];
            result = max(product,result);
            }
        }
        product = 1;
        for(int i = size(arr)-1;i>=0;--i){
            if(arr[i]==0){
            if(result<0)
            result = 0;
            product = 1;
            }
            else{
            product*=arr[i];
            result = max(product,result);
            }
        }
        return result;
    }
};