class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int x : nums) {
            int cnt = 2; 
            int s = 1 + x; 
            for (int i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    int j = x / i;
                    if (i == j) {
                        cnt += 1;
                        s += i;
                    } else {
                        cnt += 2;
                        s += i + j;
                    }
                }
                if (cnt > 4) break;
            }
            if (cnt == 4) sum += s;
        }
        return sum;
    }
};
