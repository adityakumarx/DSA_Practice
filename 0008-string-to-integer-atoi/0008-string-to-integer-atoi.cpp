class Solution {
public:
    int myAtoi(string s) {
        unordered_map<char,int> m{{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};//can use direct if else to decreaes time complexity
        long long ans{0};
        char sign{0};
        bool zero{false};
        for(char c : s){
            if(ans>INT_MAX)
            break;
            if(c==' ' && !zero)
            continue;
            else if(c==' ' && zero)
            break;
            else if(c=='-' || c=='+'){
                if(sign)
                break;
                else if(zero)
                break;
                else{
                sign = c;
                zero = true;
                }
            }
            else if(c=='0'){
                if(zero)
                ans*=10;
                else
                zero = true;
            }
            else if(m.contains(c)){
                ans*=10;
                ans+=m[c];
                zero = true;
            }
            else 
            break;
        }
        if(sign=='-')
        ans*=-1;
        if(ans>INT_MAX)
        return INT_MAX;
        else if(ans<INT_MIN)
        return INT_MIN;
        return ans;
    }
};