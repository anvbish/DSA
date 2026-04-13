class Solution {
public:
    ListNode* removeElements(ListNode* head, int k) {
        if (head == NULL) return NULL;

        while (head != NULL && head->val == k) {
            head = head->next;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            if (temp->val == k) {
                prev->next = temp->next;  
                temp = temp->next;       
            } else {
                prev = temp;              
                temp = temp->next;
            }
        }

        return head;
    }
};