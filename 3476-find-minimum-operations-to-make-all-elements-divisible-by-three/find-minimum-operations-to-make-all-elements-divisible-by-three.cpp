class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int x:nums) if(x%3) count++;
        return count;
    }
};