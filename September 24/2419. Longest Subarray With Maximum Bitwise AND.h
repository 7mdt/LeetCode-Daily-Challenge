class Solution {
public:
    int longestSubarray(vector<int>& a) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int t = *max_element(a.begin(), a.end()), ans = 1;
        for(int i = 1, cnt = 1; i < a.size(); i++)
            ans = max(ans, cnt = cnt * (a[i] == a[i - 1] && a[i] == t) + 1);
        return ans;
    }
};