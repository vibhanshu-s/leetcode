int maxScore(char* s) {
    int l=0,r=0,max=0;
    for(int i=0;i<strlen(s);i++)
        if(s[i]=='1') r++;
    
    for(int i=1;i<strlen(s);i++){
        s[i-1]=='0'?l++:r--;
        max=max>(l+r)?max:(l+r);
    }
    return max;
}