class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int size=nums.size();
        if(size%k!=0) return false;
        for(int n:nums) {
            freq[n]++;
            if(freq[n]>(size/k)) return false;
        }
        return true;
    }
};