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
        if(head==NULL || head->next==NULL)
            return head;

        ListNode *prev=head;
        ListNode *root=head->next;
        head->next=NULL;

        while(root->next!=NULL){
            ListNode *after=root->next;

            root->next=prev;
            prev=root;
            root=after;
        }

        root->next=prev;

        return root;
    }
};
