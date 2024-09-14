/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
#define sz(s) (int)(s.size())
    vector<int> list, path;
    bool ans = false;
    void dfs(TreeNode* node, int idx = 0){
        if(node == nullptr){
            for(int i = 0; i < sz(path) - sz(list) + 1; i++){
                int idx = 0, j = i;
                while(idx < sz(list) && list[idx] == path[j]) idx++, j++;
                ans |= (idx == sz(list));
            }
            return;
        }
        path.push_back(node->val);
        dfs(node->left, idx);
        dfs(node->right, idx);
        path.pop_back();
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        for(ListNode* i = head; i != nullptr; i = i->next) list.emplace_back(i->val);
        dfs(root);
        return ans;
    }
};