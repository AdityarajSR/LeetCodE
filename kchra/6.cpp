#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

int main()
{
    ListNode *head;
    ListNode *first = NULL;
    ListNode *second = NULL;
    ListNode *third = NULL;
    ListNode *fourth = NULL;
    ListNode *fifth = NULL;
    ListNode *sixth = NULL;

    first = new ListNode;
    second = new ListNode;
    third = new ListNode;
    fourth = new ListNode;
    fifth = new ListNode;
    // sixth = new ListNode;

    first->val = 1;
    first->next = second;
    second->val = 2;
    second->next = third;
    third->val = 3;
    third->next = fourth;
    fourth->val = 4;
    fourth->next = fifth;
    fifth->val = 5;
    fifth->next = sixth;
    sixth->val = 6;
    sixth->next = NULL;
    int left = 2;
    int right = 4;
    //////////////////////////////////////////////////////////////////////////
    head = first;

    ListNode *l_head = NULL;
    ListNode *m = head;

    ListNode *q = NULL;
    ListNode *r = NULL;
    for (int i = 1; i < left; i++)
    {
        l_head = head;
        head = head->next;
    }
    l_head->next = NULL;
    ListNode *p = head;
    for (int i = left; i <= right; i++)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    l_head->next = q;
    head->next = p;
    
/////////////////////////////////////////////////////
    while (m)
    {
        cout<<l_head->val<<endl;
        l_head = l_head->next;
    }
    

    return 0;
}
