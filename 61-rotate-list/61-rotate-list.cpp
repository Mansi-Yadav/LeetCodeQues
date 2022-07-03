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
    int findsize(ListNode* head){
        ListNode* temp= head;
        int cnt=0;
        while(temp !=NULL){
            temp= temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL)
            return head;
        int size= findsize(head);
        for(int i=1; i<=(k % size); i++){
            
            ListNode* temp= head;
            while(temp->next->next!=NULL)
                temp= temp->next;
            
            ListNode* end= temp->next;
            temp->next=NULL;
            end->next= head;
            head= end;
        }
        return head;
    }
};