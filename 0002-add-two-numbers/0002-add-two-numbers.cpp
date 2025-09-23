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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int remainder=0;
        ListNode* summation=new ListNode();
        ListNode* ret=summation;
        while(l1!=nullptr||l2!=nullptr||remainder){
            summation->val=remainder;
            if(l1!=nullptr)
                summation->val+=l1->val;
            if(l2!=nullptr)
                summation->val+=l2->val;
            remainder=summation->val/10;
            summation->val%=10; 
            
            if(l1!=nullptr)
                l1=l1->next;
            if(l2!=nullptr)
                l2=l2->next;
            if(l1!=nullptr||l2!=nullptr||remainder){
                summation->next=new ListNode();
                summation=summation->next;
            } 



        }
        return ret;
    }
};