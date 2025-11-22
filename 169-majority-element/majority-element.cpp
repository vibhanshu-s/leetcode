class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int major=0,majority=0;
       for(int n:nums){
        if(majority==0) major=n;
        majority+=n==major?1:-1;
       } 
       return major;      
    }
};