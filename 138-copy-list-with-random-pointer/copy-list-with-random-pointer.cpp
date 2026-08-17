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
    Node* copyRandomList(Node* head) {//create dummy node
        Node*dummy = new Node(0);
        Node*temp = head;
        Node*tempc = dummy;
        while(temp!=NULL){
            Node*a = new Node(temp->val);
            tempc->next = a;
            tempc = tempc->next;
            temp = temp->next;
        }
        Node*a = head;
        Node*b = dummy->next;
        //make a map of org , dummy node.
        unordered_map<Node*,Node*>m;
        Node*tempa = a;
        Node*tempb = b;
        while(tempa!=NULL && tempb!=NULL){
            m[tempa] = tempb;
            tempa = tempa->next;
            tempb = tempb->next;
        }

        for(auto x:m){
            Node*o = x.first;
            Node*d = x.second;
            if(o->random!=NULL){
                Node*oRandom = o->random;
                Node*dupRandom = m[o->random];
                d->random = dupRandom;
            }
        }

        return b;

    }
};