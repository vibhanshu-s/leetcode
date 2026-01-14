class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int axr=0,bxr=0;
        for(int x:arr1) axr^=x;
        for(int x:arr2) bxr^=x;
        return axr&bxr;
    }
};