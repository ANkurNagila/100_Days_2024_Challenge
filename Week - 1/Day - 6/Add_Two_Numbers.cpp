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
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;

        int rem=0;
        ListNode *prev=NULL;
        ListNode *root=l1;

        while(l1!=NULL && l2!=NULL){
            int sum=l1->val + l2->val + rem;
            rem=sum/10;

            l1->val = sum%10;
            prev=l1;
            l1=l1->next;
            l2=l2->next;

        }

        if(l1==NULL && l2!=NULL){
            prev->next=l2;
            l1=l2;
        }

        while(l1!=NULL){
            int sum=l1->val+rem;
            rem=sum/10;

            l1->val=sum%10;
            prev=l1;
            l1=l1->next;
        }

        if(rem!=0){
            ListNode *x=new ListNode(rem);
            prev->next=x;
        }

        return root;
        
    }
};
