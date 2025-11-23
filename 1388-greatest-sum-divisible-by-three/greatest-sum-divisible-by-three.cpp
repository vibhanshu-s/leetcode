class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> r1, r2;
        int total = 0;

        for (int n : nums) {
            total += n;
            if (n % 3 == 1) r1.push_back(n);
            else if (n % 3 == 2) r2.push_back(n);
        }

        sort(r1.begin(), r1.end());
        sort(r2.begin(), r2.end());

        int rem = total % 3;
        if (rem == 0) return total;

        int remove = INT_MAX;

        if (rem == 1) {
            if (!r1.empty()) remove = min(remove, r1[0]);
            if (r2.size() >= 2) remove = min(remove, r2[0] + r2[1]);
        } else { 
            if (!r2.empty()) remove = min(remove, r2[0]);
            if (r1.size() >= 2) remove = min(remove, r1[0] + r1[1]);
        }

        return (remove == INT_MAX) ? 0 : total - remove;
    }
};
