class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum=0;
        for(int x:nums) sum+=x;
        int rem=sum%p;
        if(!rem) return 0;
        long long prefix=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        int ans=nums.size();
        for(int i=0;i<nums.size();i++){
          prefix=(prefix+nums[i])%p;
          int k=(prefix-rem+p)%p;
          if(mp.count(k)) ans=min(ans,i-mp[k]);
          mp[prefix]=i;
        }
        return ans==nums.size()?-1:ans;
    }
};