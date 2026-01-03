class Solution {
public:
    int numOfWays(int n) {
        int mod=1000000007;
        long long A=6,B=6;
        for(int i=2;i<=n;i++){
            long long a= (2*A+2*B)%mod;
            long long b= (2*A+3*B)%mod;
            A=a,B=b;
        }
        return (A+B)%mod;
    }
};