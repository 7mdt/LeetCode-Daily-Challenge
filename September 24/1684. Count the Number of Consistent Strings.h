class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        vector<int> f(26);
        for (auto& c : allowed)
            f[c - 'a']++;
        int ans = 0;
        for (auto& word : words) {
            bool ok = 1;
            for (auto& c : word)
                ok &= f[c - 'a'];
            ans += ok;
        }
        return ans;
    }
};