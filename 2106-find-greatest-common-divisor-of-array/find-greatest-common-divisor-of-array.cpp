class Solution {
public:
    int gcd(int a,int b){
        int mini=min(a,b);
        int maxi=max(a,b);
        if(maxi%mini==0) return mini;
        return gcd(maxi%mini,mini);
    }
    int findGCD(vector<int>& nums) {
        int maximum= *max_element(nums.begin(),nums.end());
        int minimum=*min_element(nums.begin(),nums.end());
        cout<<minimum<<" "<<maximum;
        return gcd(maximum,minimum);
    }
};