class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char> mp;
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss>>word)
           words.push_back(word);

        if(words.size()!=pattern.size()) return false;
        int i=0;
        for(string str:words){
            if(mp.find(str)!=mp.end() && mp[str]!=pattern[i]) return false;
            mp[str]=pattern[i];
            i++;
        }
        unordered_map<char,string> mp2;
        i=0;
        for(char c:pattern){
            if(mp2.find(c)!=mp2.end() && mp2[c]!=words[i]) return false;
            mp2[c]=words[i];
            i++;      
         }
         return true;
    }
};