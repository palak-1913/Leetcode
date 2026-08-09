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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*curr = head,*prev=NULL,*Next=NULL;
        ListNode*temp = curr;
        int count=0;
        while(temp!=NULL && count<k){
            count++;
            temp = temp->next;
        }

        if(count<k) return head;
        else if(count==k){
            int x = k;
            while(x>0){
                Next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = Next;
                x--;
            }
            head->next = reverseKGroup(curr,k);
        }

        return prev;
        
    }
};