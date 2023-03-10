#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr) return NULL;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* entry = head;

        while (fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                while(entry != slow){
                    entry = entry->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};

int main()
{

    return 0;
}