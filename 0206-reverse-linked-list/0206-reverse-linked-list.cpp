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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) {
            return head;
        }
        ListNode* currentNode=head;
        ListNode* previousNode=nullptr;
        ListNode* nextNode=head->next;
        currentNode->next=nullptr;
        while(nextNode!=nullptr ){
            previousNode=currentNode;
            currentNode=nextNode;
            nextNode=nextNode->next;
            currentNode->next=previousNode;
        }
        return currentNode;
    }
};