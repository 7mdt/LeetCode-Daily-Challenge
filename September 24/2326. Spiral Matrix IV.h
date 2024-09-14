class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ret(m, vector<int>(n, -1));
        int fromi = 0, toi = m - 1, fromj = 0, toj = n - 1;
        while(head != nullptr){
            for(int j = fromj; j <= toj && head != nullptr; j++){
                ret[fromi][j] = head->val;
                head = head->next;
            }
            for(int i = fromi + 1; head != nullptr && i <= toi; i++){
                ret[i][toj] = head->val;
                head = head->next;
            }
            for(int j = toj - 1; j >= fromj && head != nullptr; j--){
                ret[toi][j] = head->val;
                head = head->next;
            }
            for(int i = toi - 1; i > fromi && head != nullptr; i--){
                ret[i][fromj] = head->val;
                head = head->next;
            }
            fromi++, fromj++, toi--, toj--;
        }
        return ret;
    }
};