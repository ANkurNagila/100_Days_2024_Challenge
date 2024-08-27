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
    ListNode* merge(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        ListNode* root;
        ListNode* head;
        ListNode* poi1 = list1;
        ListNode* poi2 = list2;

        if (poi1->val < poi2->val) {
            root = poi1;
            poi1 = poi1->next;
        } else {
            root = poi2;
            poi2 = poi2->next;
        }

        head = root;

        while (poi1 != nullptr && poi2 != nullptr) {
            if (poi1->val < poi2->val) {
                root->next = poi1;
                poi1 = poi1->next;
            } else {
                root->next = poi2;
                poi2 = poi2->next;
            }
            root = root->next;
        }

        if (poi1 != nullptr)
            root->next = poi1;
        if (poi2 != nullptr)
            root->next = poi2;

        return head;
    }


    ListNode* mergeSort(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* first = middleTerm(head);
        ListNode* second = first->next;
        first->next = nullptr;

        first = mergeSort(head);
        second = mergeSort(second);

        head = merge(first, second);
        return head;
    }

    ListNode* middleTerm(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        return prev;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        for (ListNode* list : lists) {
            tail->next = list;
            while (tail->next != nullptr)
                tail = tail->next;
        }

        return mergeSort(dummy->next);
    }

};
