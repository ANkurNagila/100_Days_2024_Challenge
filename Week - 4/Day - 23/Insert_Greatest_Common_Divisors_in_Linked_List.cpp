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
    int gcd(int a,int b){
        while (a > 0 && b > 0) {
            if (a > b) {
                a = a % b;
            }
            else {
                b = b % a;
            }
        }

        if (a == 0)
            return b;
        
        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* temp=head;

        while(temp!=NULL && temp->next!=NULL){
            ListNode* after=temp->next;
            int ele=gcd(temp->val,after->val);
            
            ListNode *x=new ListNode(ele);
            temp->next=x;
            x->next=after;
            temp=after; 

        }

        return head;
    }
};