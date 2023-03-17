#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* p = NULL;
        ListNode* q = NULL;
        ListNode* r = slow;

        while (r)
        {
            q = r;
            p = q;
            p = p->next;
            q->next = r;
        }

        while (r == head)
        {
            if(r->val != head->val) return false;
            r = r->next;
            head = head->next;
        }
        return true;     
    }
};

int main(){
    
    return 0;
}