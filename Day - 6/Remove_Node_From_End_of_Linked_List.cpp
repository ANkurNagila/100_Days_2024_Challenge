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
        ListNode *temp=head;
        int i=1;

        
        while(i<=n){
            temp=temp->next;
            i++;
        }
        //cout<<temp->val<<endl;

        ListNode *prev=NULL;
        ListNode *root=head;
        while(root!=NULL){
            if(temp==NULL){
                if(prev!=NULL)
                    prev->next=root->next;
                else
                    head=head->next;

                return head;

            }
            
            temp=temp->next;
            prev=root;
            root=root->next;
        }

        return head;
    }
};
