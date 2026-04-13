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
    ListNode* findNode(ListNode* head,int k){
        int count=1;
        ListNode*temp=head;
        while(temp!=NULL){
            if(count==k){
                return temp;
            }
            count++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int len=1;
       ListNode* tail=head;
       if(head == NULL || head->next == NULL) return head;
       while(tail->next!=NULL){
        len++;
        tail=tail->next;
       } 
       if(k%len==0)return head;

       k=k%len;
       tail->next=head;
       ListNode* newTail=findNode(head,len-k);
       head=newTail->next;
       newTail->next=NULL;
       return head;
    }
};