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
    ListNode*reverse(ListNode*head){
        ListNode*curr = head,*prev=NULL,*Next=NULL;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    ListNode* list(stack<int>st){
        ListNode*head = new ListNode (st.top());
        st.pop();
        ListNode*temp = head;
        while(!st.empty()){
            temp->next = new ListNode(st.top());
            st.pop();
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode*temp = head;
        stack<int>st;
        while(temp!=NULL){
            while(!st.empty() && temp->val>st.top()) st.pop();
            st.push(temp->val);
            temp = temp->next;
        }
        head = list(st);
        return reverse(head);
        
    }
};