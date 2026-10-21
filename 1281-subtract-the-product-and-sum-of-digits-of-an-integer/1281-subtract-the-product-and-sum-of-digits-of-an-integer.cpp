class Solution {
public:
    int subtractProductAndSum(int n) {
        long long temp=n;
        long long product=1;
        long long sum=0;
        while(temp>0)
        {
            long long digit = temp%10;
            sum+=digit;
            product*=digit;
            temp/=10;
        }
        return product-sum;
    }
};