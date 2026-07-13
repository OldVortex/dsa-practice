/*
Problem: Merge Two Sorted Lists
LeetCode #21

Approach:
Use two pointers to traverse both sorted linked lists and merge
them by reusing the existing nodes. Initialize the head of the
merged list with the smaller first node, then repeatedly append
the smaller node from either list to the merged list. Once one
list is exhausted, attach the remaining nodes of the other list.

Time Complexity: O(n + m)
Space Complexity: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) {
        return list2;
    }

    if (list2 == NULL) {
        return list1;
    }
    
    struct ListNode *head;
    struct ListNode *tail;

    if (list1->val <= list2->val) {
        head = list1;
        list1 = list1->next;
    } 

    else {
        head = list2;
        list2 = list2->next;
    }

    tail = head;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail -> next = list1;
            tail = list1;
            list1 = list1->next;
        }

        else {
            tail->next = list2;
            tail = list2;
            list2 = list2->next;
        }
    }

    if (list1 != NULL) {
        tail->next = list1;
    }

    else {
        tail->next = list2;
    }

    return head;
}
