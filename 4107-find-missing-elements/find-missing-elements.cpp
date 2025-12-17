class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        vector<bool> present(mx - mn + 1, false);
        for (int x : nums) 
            present[x - mn] = true;
        vector<int> missing;
        for (int i = 0; i < present.size(); i++) {
            if (!present[i]) {
                missing.push_back(i + mn);
            }
        }

        return missing;
    }
};
