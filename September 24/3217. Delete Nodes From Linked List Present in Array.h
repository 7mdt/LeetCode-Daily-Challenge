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
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        unordered_set<int> st;
        for(auto& i : nums) st.insert(i);
        ListNode *past = nullptr;
        for(ListNode* i = head; i != nullptr; i = i->next){
            if(i->next == nullptr && st.count(i->val)) past->next = nullptr;
            if(st.count(i->val)) continue;
            if(past == nullptr) past = head = i;
            else past->next = i, past = i;
        }
        return head;
    }
};