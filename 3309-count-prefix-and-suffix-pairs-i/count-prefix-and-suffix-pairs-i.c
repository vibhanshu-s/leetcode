int isPrefixAndSuffix(char* str1, char* str2) {
    int n1 = strlen(str1), n2 = strlen(str2);
    if (n1 > n2) {
        return 0; 
        }

    return (strncmp(str2, str1, n1) == 0) && (strncmp(str2 + n2 - n1, str1, n1) == 0);
}
int countPrefixSuffixPairs(char** words, int wordsSize) {
    int count=0;
    for(int i=0;i<wordsSize;i++){
        for(int j=i+1;j<wordsSize;j++){
            count+=isPrefixAndSuffix(words[i],words[j]);
        }
    }
    return count;
}