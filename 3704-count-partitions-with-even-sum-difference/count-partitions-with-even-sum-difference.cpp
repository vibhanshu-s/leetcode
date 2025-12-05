class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        for(int x:nums) total+=x;
        if(total%2) return 0;
        int count=0,left=0,right=total;
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            right-=nums[i];
            if(left%2==right%2) count++;
        }
        return count;
    }
};