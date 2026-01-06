class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<pair<int,int>> zero;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(matrix[i][j] == 0)
                    zero.push_back({i, j});
        for(auto &p : zero) {
            int r = p.first, c = p.second;
            for(int j = 0; j < n; j++) matrix[r][j] = 0;
            for(int i = 0; i < m; i++) matrix[i][c] = 0;
        }
    }
};
