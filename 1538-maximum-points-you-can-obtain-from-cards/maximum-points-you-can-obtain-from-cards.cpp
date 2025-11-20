class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum=0,rightSum=0,n=cardPoints.size();
        for(int i=0;i<k;i++) leftSum+=cardPoints[i];
        int maxScore=leftSum;
        for(int i=1;i<=k;i++){
            leftSum-=cardPoints[k-i];
            rightSum+=cardPoints[n-i];
            maxScore=max(maxScore,leftSum+rightSum);
        }
        return maxScore;
    }
};