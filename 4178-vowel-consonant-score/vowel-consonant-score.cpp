class Solution {
public:
    int vowelConsonantScore(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int v(0),cn(0);
        for(char c:s){
            if(isalpha(c))
                if(vowels.find(tolower(c))!=vowels.end()) v++;
                else cn++;
        }
        cn>0?cn=v/cn:0;
        return cn;
    }
};