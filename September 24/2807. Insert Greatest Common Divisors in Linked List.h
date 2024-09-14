class Solution {
public:
    int gcd(int a, int b, int tmp = 0){
        while(b != 0) tmp = a, a = b, b = tmp % b;
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        for(ListNode* cur = head->next, *past = head; cur != nullptr; cur = cur->next){
            ListNode* g = new ListNode(gcd(cur->val, past->val));
            past->next = g;
            g->next = cur;
            past = cur;
        }
        return head;
    }
};