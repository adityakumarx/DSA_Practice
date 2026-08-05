//Valid Palindrome
//learned: use of isalnum(checks alphanumeric values 'a' to 'z','A' to 'Z' and 0 to 9;
//learned: use of tolower(changes case of char in a string)
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
