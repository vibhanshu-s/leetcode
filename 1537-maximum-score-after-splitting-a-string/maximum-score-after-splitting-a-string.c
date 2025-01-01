int maxScore(char* s) {
    int l=0,r=0,max=0;
    int n=strlen(s);
    for(int i=0;i<n;i++)
        if(s[i]=='1') r++;
    
    for(int i=1;i<n;i++){
        if(s[i-1]=='0') l++;
        else r--;
        max=max>(l+r)?max:(l+r);
    }
    return max;
}