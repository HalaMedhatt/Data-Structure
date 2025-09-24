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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy=new ListNode();
        ListNode* cur=dummy;
        int sz=lists.size();
        while(1){
            int minIdx=-1,minVal=1e9;
            for(int i=0;i<sz;i++){
                if(lists[i]!=nullptr&&minVal>lists[i]->val){
                    minVal=lists[i]->val;
                    minIdx=i;
                }
            }
            if(minIdx==-1)
                break;
            
            cur->next=lists[minIdx];
            lists[minIdx]=lists[minIdx]->next;
            cur=cur->next;
        }
        return dummy->next;

    }
};