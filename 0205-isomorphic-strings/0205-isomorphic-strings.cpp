class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mapping;
        unordered_set<char> checking;
        if(s.length()!=t.length())
        return false;
        for(size_t i=0;i<s.length();i++)
        {
            if(mapping.contains(s[i])){
                if(mapping[s[i]]==t[i])
                continue;
                else
                return false;
            }
            else if(checking.contains(t[i]))
            return false;
            else{
            mapping[s[i]]=t[i];
            checking.insert(t[i]);
            }
        }
        return true;
    }
};