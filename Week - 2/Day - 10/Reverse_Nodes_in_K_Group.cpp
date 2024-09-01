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
    pair<ListNode*,ListNode*> reverse(ListNode *head,ListNode *tail){
        if(head==NULL || head->next==NULL)
            return {head,NULL};

        if(head->next==tail){
            head->next=NULL;
            tail->next=head;

            return {tail,head};
        }

        ListNode *temp=head->next;
        ListNode *prev=head;
        prev->next=NULL;
        ListNode* after;
        head->next=NULL;

        while(temp!=tail){
            after=temp->next;
            temp->next=prev;
            prev=temp;
            temp=after;
        }
        
        temp->next=prev;
        prev=temp;

        return {prev,head};

    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k<=1)
            return head;

        ListNode *tail=head;
        ListNode *root=tail;
        int n=k-1;
        while(tail!=NULL && n-- ){
            tail=tail->next;
        }

        root=tail->next;

        auto it=reverse(head,tail);
        head=it.first;
        tail=it.second;

        tail->next=root;
        ListNode* temp=root;

        n=k-1;
        
        while(temp!=NULL){
            //cout<<n<<" "<<temp->val<<endl;
            if(n!=0){
                n--;
                temp=temp->next;
            }
            else{
                n=k-1;

                ListNode* prev=tail;
                
                tail=temp;
                temp=temp->next;
                
                //cout<<root->val<<" "<<tail->val<<endl;
                auto it=reverse(root,tail);
                
                root=it.first;
                tail=it.second;

                prev->next=root;
                tail->next=temp;
                root=temp;
            }
        }

        return head;
    }
};
