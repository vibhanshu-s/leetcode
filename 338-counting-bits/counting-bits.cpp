class Solution {
public:
    int countOnes(int n){
        int count=0;
        while(n>0){
            count+=n&1;
            n>>=1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<=n;i++)   
            res.push_back(countOnes(i));
        return res;
    }
};