class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string, long long> freq;

        for (auto &w : words) {
            string key;
            key.reserve(w.size() * 2);

            for (int i = 0; i < w.size(); i++) {
                int diff = (w[i] - w[0] + 26) % 26;
                key.push_back('a' + diff);
            }

            freq[key]++;
        }

        long long ans = 0;
        for (auto &[_, cnt] : freq) {
            ans += cnt * (cnt - 1) / 2;
        }
        return ans;
    }
};
