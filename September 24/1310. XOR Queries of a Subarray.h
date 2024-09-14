class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        vector<int> ret(queries.size());
        for(int i = 1; i < arr.size(); i++)
            arr[i] ^= arr[i - 1];
        for(int i = 0; i < queries.size(); i++){
            int l = queries[i][0], r = queries[i][1];
            ret[i] = arr[r] ^ (l ? arr[l - 1] : 0);
        }
        return ret;
    }
};