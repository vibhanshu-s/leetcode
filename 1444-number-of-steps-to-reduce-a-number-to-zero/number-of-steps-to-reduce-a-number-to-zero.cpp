class Solution {
public:
    int numberOfSteps(int num) {
        int count=0,k=0;
        if(num==0) return 0;
        while(num>0){
            count++;
            if(num&1) count++;
            num>>=1;
        }
        return count-1;
    }
};