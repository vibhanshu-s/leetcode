class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        long long A = llabs(dividend);
        long long B = llabs(divisor);
        long long ans = 0;

        while (A >= B) {
            long long temp = B, k = 1;
            while ((temp << 1) <= A) {
                temp <<= 1;
                k <<= 1;
            }
            A -= temp;
            ans += k;
        }
        return (dividend<0)^(divisor<0)?-ans:ans;
    }
};
