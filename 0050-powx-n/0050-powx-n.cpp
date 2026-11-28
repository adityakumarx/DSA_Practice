class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        if(nn<0){
        nn*=-1;
        }
        double ans=powSolve(x,nn);
        return (n<0)?1.0/ans:ans;
    }
    double powSolve(double x,long long n){
        if(n==0)
        return 1;
        double half = powSolve(x,n/2);
        if(n%2)
        return half*half*x;
        return half*half;
    }
};