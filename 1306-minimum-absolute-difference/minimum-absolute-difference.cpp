class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;
        vector<vector<int>> res;
        for(int i=0;i<arr.size()-1;i++)
            min_diff=min(min_diff,abs(arr[i]-arr[i+1]));
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1])==min_diff) 
                res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};