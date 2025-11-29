class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        vector<int> res;
        int carry=1;
        while(i>=0){
            int temp=digits[i]+carry;
            if(carry>0){
                carry=temp/10;
                temp%=10;
            }
            res.push_back(temp);
            i--;
        }
        if(carry) res.push_back(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};