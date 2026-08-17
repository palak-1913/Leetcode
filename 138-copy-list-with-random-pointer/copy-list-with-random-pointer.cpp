/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //create a dummy node with any random pointer 
        Node*t = head;
        Node*dummy = new Node(INT_MAX);
        Node*td = dummy;
        while(t!=NULL){
            Node*a = new Node(t->val);
            td->next = a;
            t = t->next;
            td = td->next;
        }

        // now merge the LL(alternate connection)
        td = dummy;
        Node*b=dummy->next;
        Node*a=head;
        while(a!=NULL){
            td->next = a;
            a = a->next;
            td = td->next;
            td->next = b;
            b = b->next;
            td = td->next;
        }
        
        dummy = dummy->next;
        a = dummy;
        b = head;
        while(a!=NULL){
            b = a->next;
            if(a->random!=NULL)b->random = a->random->next;
            a = a->next->next;
        }

        //now remove the connections
        Node*d1 = new Node(INT_MAX);
        Node*t1 = d1;
        Node*d2 = new Node(INT_MAX);
        Node*t2 = d2;
        td = dummy;
        while(td!=NULL){
            t1->next = td;
            td = td->next;
            t1 = t1->next;

            t2->next = td;
            t2 = t2->next;
            td = td->next;
        }
        t1->next=NULL;
        t2->next=NULL;
        d2 = d2->next;
        d1 = d1->next;
        return d2;
         
    }
};