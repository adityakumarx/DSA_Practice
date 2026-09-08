class Solution {
public:
    void merge(vector<int>& m,[[maybe_unused]]int l,vector<int>& n,[[maybe_unused]]int o)
    {
        int i = l-1;
        int j = l+o-1;
        int k = o-1;
        while(i>=0 && k>=0)
        {
            if(m[i]>n[k])
                m[j--]=m[i--];
            else
                m[j--]=n[k--];
        }
        while(k>=0)
        {
            m[j--]=n[k--];
        }
    }
};