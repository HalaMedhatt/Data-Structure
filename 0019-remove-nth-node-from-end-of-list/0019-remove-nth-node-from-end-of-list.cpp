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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int listSize=0;
        ListNode* cur=head;
        while(cur!=nullptr){
            listSize++;
            cur=cur->next;
        }
        int cnt=listSize-n;
        ListNode* dummy=new ListNode();
        cur=dummy;
        while(head!=nullptr){
            if(!cnt) 
                head=head->next;
        
            cur->next=head; 
            if(head!=nullptr)   
                head=head->next;    
            cur=cur->next;
            cnt--;
        }
        return dummy->next;
    }
};