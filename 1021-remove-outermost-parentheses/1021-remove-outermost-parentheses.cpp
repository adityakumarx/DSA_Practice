class Solution {
public:
    string removeOuterParentheses(string s) {
        int d{0};
        string c{};
        for(char l : s){
            if(l=='(')
            {
                if(d>0)
                c.push_back(l);
                d++;
            }
            else{
                d--;
                if(d>0)
                c.push_back(l);
            }
        }
        return c;
    }
};