class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int count = 0;
        int i=0;
        while(count<nums1.size()){
        temp.push_back(nums1[i]);
        i++;
        count++;}
        i = 0;
        while(i<nums2.size())
        {
            temp.push_back(nums2[i]);
            i++;
        }
        sort(temp.begin(),temp.end());
        float ans=0;
        if(temp.size()%2==0)
        ans=(temp[temp.size()/2 -1]+temp[temp.size()/2])/2.0;
        else
        ans = temp[temp.size()/2];
        return ans;
    }
};