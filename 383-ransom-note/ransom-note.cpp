class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26,0);
        for(int c:magazine)
            freq[c-'a']++;
        for(int c:ransomNote)
         freq[c-'a']--;
        for(int x:freq) if(x<0) return false;
        return true;
    }
};