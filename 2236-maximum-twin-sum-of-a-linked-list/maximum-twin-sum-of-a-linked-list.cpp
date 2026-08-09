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
        ListNode*dummy = new ListNode(-1);
        ListNode*curr = head,*Next = NULL ,*prev=dummy;
        while(curr!=NULL){
            Next = curr->next;
            ListNode*newNode = new ListNode(curr->val);
            newNode->next = prev->next;
            prev->next = newNode;
            curr = Next;

        }
        return dummy->next;
    }
    int pairSum(ListNode* head) {
        ListNode*revHead = reverse(head);
        ListNode*temp = head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }

        int max_sum=0;
        for(int i=1;i<=len/2;i++){
            max_sum = max(max_sum,revHead->val+head->val);
            revHead = revHead->next;
            head = head->next;
        }
        return max_sum;
    }
};