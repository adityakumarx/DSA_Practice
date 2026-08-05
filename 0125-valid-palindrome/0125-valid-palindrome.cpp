class Solution {
public:
    bool isPalindrome(string_view s) {
        std::size_t left{0};
        std::size_t right{s.length()-1};

        while(left<right)
        {
            if(!isalnum(s[left]))
            ++left;
            else if(!isalnum(s[right]))
            --right;
            else if(tolower(s[left])!=tolower(s[right]))
            return false;
            else
            {
                ++left;
                --right;
            }
        }
        return true;
    }
};
