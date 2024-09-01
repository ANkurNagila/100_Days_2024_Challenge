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
    void reorderList(ListNode* head) {
        unordered_map<int,ListNode *> map;

        int i=0;
        ListNode* root=head;
        while(root!=NULL){
            cout<<root->val<<" ";
            map[i]=root;
            root=root->next;
            i++;
        }
        cout<<endl;

        int j=i-1;
        i=0;

        int flag=0;
        while(i<j){
            if(flag==0)
                map[i++]->next=map[j];
            else
                map[j--]->next=map[i];

            flag^=1;
        }

        map[i]->next=NULL;
    }
};
