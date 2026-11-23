class Solution {
public:
    string removeOuterParentheses(string s) {
       int cnt = 0;
       string c{};
       for(int i=0;i<s.size();i++){
        if(s[i]=='(')
        cnt++;
        else if(s[i]==')')
        cnt--;
        if(cnt>=2){
        c.push_back(s[i]);
        }
       else if(cnt>=1 && s[i]==')')
       c.push_back(s[i]);
       }
       return c;
    }
};