class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> w2c;
        unordered_map<char, string> c2w;

        stringstream ss(s);
        string word;
        int i = 0;

        while (ss >> word) {
            if (i >= pattern.size()) return false;

            char c = pattern[i];

            if (w2c.count(word) && w2c[word] != c) return false;
            if (c2w.count(c) && c2w[c] != word) return false;

            w2c[word] = c;
            c2w[c] = word;
            i++;
        }

        return i == pattern.size();
    }
};
