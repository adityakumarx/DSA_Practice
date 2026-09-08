class Solution {
public:
    void merge(vector<int>& m,[[maybe_unused]]int l,vector<int>& n,[[maybe_unused]]int o)
    {
        int s = l+o;
        vector<int> temp = m;
        m.clear();
        int i = 0;
        int j = 0;
        while(true)
        {
            if(i==l && j == o)
            break;
            if(i<l&&j<o)
            {
                if(temp[i]>n[j]){
                m.push_back(n[j]);
                j++;
                }
                else if(temp[i]<n[j]){
                m.push_back(temp[i]);
                i++;
                }
                else{
                    m.push_back(temp[i]); i++;
                    m.push_back(n[j]); j++;
                }
            }
            else if(i<l)
            {
                while(i!=l)
                {
                    m.push_back(temp[i]);
                    ++i;
                }
            }
            else
            {
                while(j!=o)
                {
                    m.push_back(n[j]);
                    j++;
                }
            }
        }
    }
};