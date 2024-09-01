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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;


        ListNode* root;
        ListNode* head;
        ListNode* poi1=list1;
        ListNode* poi2=list2;

        if(poi1->val<poi2->val){
            root=poi1;
            poi1=poi1->next;
        }
        else{
            root=poi2;
            poi2=poi2->next;
        }

        head=root;

        while(poi1!=NULL && poi2!=NULL){
            if(poi1->val<poi2->val){
                root->next=poi1;
                poi1=poi1->next;
            }
            else{
                root->next=poi2;
                poi2=poi2->next;
            }

            root=root->next;
        }

        if(poi1!=NULL)
            root->next=poi1;
        if(poi2!=NULL)
            root->next=poi2;


        return head;

    }
};
