class Solution {
public:
    int sum(string& s, int i = 0){
        if(i == s.size()) return 0;
        return (s[i] - '0') + sum(s, i + 1);
    }
    int getLucky(string s, int k, string temp = "") {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        for(auto &i : s) temp += to_string(int(i - 96));
        while(k--) temp = to_string(sum(temp));
        return stoi(temp);
    }
};