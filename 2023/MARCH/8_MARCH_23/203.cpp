#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *prev = NULL;
        
        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
        
        ListNode *helperNode = head;

        while (helperNode)
        {
            if (helperNode->val == val)
            {
                helperNode = helperNode->next;
            }
            else
            {
                prev = helperNode;
                helperNode = helperNode->next;
            }
        }
        return head;
    }
};

int main()
{

    return 0;
}