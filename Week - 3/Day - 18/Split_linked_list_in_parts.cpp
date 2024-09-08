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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;

        while(temp!=NULL){
            temp=temp->next;
            n++;
        }

        int ele=n/k;
        int rem=n%k;
        ListNode* root=head;
        temp=head;
        int count=ele;

        vector<ListNode*> ans;
        ListNode* prev;

        while(temp!=NULL){
            if(count--!=0){
                prev=temp;
                temp=temp->next;
            }
            else{
                if(rem-->0){
                    prev=temp;
                    temp=temp->next;
                }
                count=ele;
                prev->next=NULL;
                ans.push_back(root);
                root=temp;
            }
        }

        if(root!=NULL)
            ans.push_back(root);

        while(ans.size()!=k){
            ans.push_back(NULL);
        }

        return ans;
        
    }
};