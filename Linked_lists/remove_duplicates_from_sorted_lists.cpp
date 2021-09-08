/**
https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,

Given 1->1->2, return 1->2.

Given 1->1->2->3->3, return 1->2->3.


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* p = A;
    if(A==NULL)
    return A;
    ListNode* prev=A;
    p=A->next;
    while(p!=NULL)
    {   
        if(prev->val!=p->val)
        {
            prev->next=p;
            prev=p;
        }
        p=p->next;

    }
    prev->next=NULL;

    return A;
}
