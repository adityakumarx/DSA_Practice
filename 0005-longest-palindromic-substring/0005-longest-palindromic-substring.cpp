class Solution {
public:
    string longestPalindrome(string s) {
        int pos{0};
        int len{1};
        for(int i=0;i<s.size();i++){
            int j=1;
            while(i-j >= 0 && i+j < s.size()){
                if(s[i+j]==s[i-j])
                {
                    if(len<1+2*j){
                        pos=i-j;
                        len=1+2*j;
                    }
                }
                else break;
                j++;
            }
            j=0;
            while(i+j < s.size() && i-1-j >=0){
                if(s[i+j]==s[i-1-j]){
                    if(len<2+2*j){
                        len=2+2*j;
                        pos=i-1-j;
                    }
                }
                else break;
                j++;
            }
        }
        return s.substr(pos,len);
    }
};