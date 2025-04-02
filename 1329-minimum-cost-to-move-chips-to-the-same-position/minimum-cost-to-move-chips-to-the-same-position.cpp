class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cost=0;
        unordered_map<int,int> fr;
        for (int num : position) {
        fr[num]++;
             }
        int evenSum=0,oddSum=0;
        for(auto &pair: fr){
            if(pair.first%2==0) evenSum+=pair.second;
            else oddSum+=pair.second;
        }
        return evenSum>oddSum?oddSum:evenSum;
    }
};