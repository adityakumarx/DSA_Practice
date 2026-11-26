class Solution {
public:
    int myAtoi(string s) {
        long ans{0};
        int sign{1};
        if(s.size()==0) return 0;
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        if(i>s.size()-1) return 0;
        if(s[i]=='-') sign*=-1;
        i = (s[i] == '-' || s[i] == '+')?(i+1):(i);
        while(i<s.size()){
            if(!isdigit(s[i])) break;
            ans = ans*10 + (s[i]-'0');
            if(ans*sign > INT_MAX) return INT_MAX;
            else if(ans*sign<INT_MIN) return INT_MIN;
            i++;
        }
        return sign*ans;
    }
};