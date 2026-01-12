class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = n; // all single-element subarrays

        for (int l = 0; l < n; l++) {
            unordered_set<int> st;
            st.reserve(n);

            int sum = 0;
            int mn = INT_MAX, mx = INT_MIN;

            for (int r = l; r < n; r++) {
                sum += nums[r];
                mn = min(mn, nums[r]);
                mx = max(mx, nums[r]);
                st.insert(nums[r]);

                if (r == l) continue; // skip length 1 (already counted)

                if (sum < mn || sum > mx) continue;
                if (st.count(sum)) ans++;
            }
        }
        return ans;
    }
};
