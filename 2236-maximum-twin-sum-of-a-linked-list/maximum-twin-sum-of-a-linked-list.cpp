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
    ListNode* reverse(ListNode*head){
        ListNode*curr = head,*prev=NULL,*Next=NULL;

        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        //left middle
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode*sec_head = slow->next;
        slow->next=NULL;

        sec_head = reverse(sec_head);

        int max_sum = 0;
        while(sec_head!=NULL && head!=NULL){
            max_sum = max(max_sum,head->val+sec_head->val);
            sec_head = sec_head->next;
            head = head->next;
        }
        return max_sum;


    }
};