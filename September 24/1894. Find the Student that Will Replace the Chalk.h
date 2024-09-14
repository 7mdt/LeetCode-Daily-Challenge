class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        k %= accumulate(chalk.begin(), chalk.end(), 0ll);
        for(int i = 0; i < chalk.size(); i++){
            if(k < chalk[i]) return i;
            k -= chalk[i];
        }
        return -1;
    }
};