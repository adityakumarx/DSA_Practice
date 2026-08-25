class Solution {
public:
    int reverse(int x) {
    int rev{ 0 };
    while (x != 0)
    {
        int digit{ x % 10 };
        if ((std::numeric_limits<int>::max()) / (10) < rev || std::numeric_limits<int>::min() / 10 > rev)
            return 0;
        rev = rev * 10 + digit;
        x /= 10;
    }
    return rev;
}
};