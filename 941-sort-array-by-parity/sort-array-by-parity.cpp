class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     vector<int> result;
        for(int n:nums)
            if(n%2==0) result.push_back(n);
        for(int n:nums)
            if(n%2!=0) result.push_back(n);
    return result;
    }

};