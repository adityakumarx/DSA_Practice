class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans{};
        string s{};
        int open{n};
        int close{n};
        generate(open,close,ans,s);
        return ans;
    }
    void generate(int open,int close,vector<string>& ans,string& s){
        if(open==0 && close==0)
        {
            ans.push_back(s);
            return;
        }
        if(open>0)
        {
            s.push_back('(');
            generate(open-1,close,ans,s);
            s.pop_back();
        }
        if(open<close){
            s.push_back(')');
            generate(open,close-1,ans,s);
            s.pop_back();
        }
    }
};