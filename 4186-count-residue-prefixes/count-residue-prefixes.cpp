class Solution {
public:
    int residuePrefixes(string s) {
        vector<int> freq(26,0);
        int len=0,dist=0,cnt=0;
        for(char c:s){
            if(freq[c-'a']==0) dist++;
            freq[c-'a']++;
            len++;
            if(dist>2) break;
            else cnt+=(len%3==dist);
        }
        return cnt;
    }
};