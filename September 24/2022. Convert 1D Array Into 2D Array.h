class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        if(original.size() != m * n) return {};
        vector<vector<int>> ret(m, vector<int>(n));
        int idx = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                ret[i][j] = original[idx++];
            }
        }
        return ret;
    }
};