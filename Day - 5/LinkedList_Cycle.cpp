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
    bool hasCycle(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return false;
        
        ListNode *tortoise=head->next;
        ListNode *hare=head->next->next;

        while(hare!=NULL && hare->next!=NULL){
            if(hare==tortoise)
                return true;
            
            tortoise=tortoise->next;
            hare=hare->next->next;
        }
        
        return false;
    }
};
