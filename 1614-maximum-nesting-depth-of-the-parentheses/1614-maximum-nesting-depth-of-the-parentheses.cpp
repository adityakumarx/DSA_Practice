class Solution {
public:
    int maxDepth(string s) {
        int md = 0;
        int d = 0;
        for(char c : s){
            if(c=='(')
            d++;
            else if(c==')')
            d--;
            md = max(d,md);
        }
        return md;
    }
};