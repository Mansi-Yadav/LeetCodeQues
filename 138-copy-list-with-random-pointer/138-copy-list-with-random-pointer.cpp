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
        Node* temp1= head;
        unordered_map<Node*, Node*> mapp;
        while(temp1 != NULL){
            Node* temp2= new Node(temp1->val);
           mapp[temp1]= temp2;
            temp1= temp1->next;
        }
        
       temp1= head;
        
        while(temp1 != NULL){
          // Node* copy= ;
            
           mapp[temp1]->next=mapp[temp1->next];
            mapp[temp1]->random =mapp[temp1->random];
            temp1= temp1->next;   
        }
        return mapp[head];
    }
};






