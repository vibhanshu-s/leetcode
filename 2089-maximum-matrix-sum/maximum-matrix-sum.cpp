class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int neg = 0;
        int minAbs = INT_MAX;
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = matrix[i][j];
                if (x < 0) neg++;
                int ax = abs(x);
                sum += ax;
                minAbs = min(minAbs, ax);
            }
        }
        if (neg % 2) sum -= 2LL * minAbs;
        return sum;
    }
};
