class Solution{
     public:
     int singleNonDuplicate(vector<int>& arr)
     {
        if(arr.size()==1)
        return arr[0];
         for(int i=0;i<arr.size();++i)
         {
             if(arr[i]==arr[i+1])
             i++;
             else return arr[i];
         }
         return -1;
     }
 };