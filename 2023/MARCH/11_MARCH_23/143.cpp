#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};


class Solution {
private:
    ListNode* reverse(ListNode* head){
        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* r = NULL;
        while (p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return p;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* firstList = head;
        ListNode* secondList = slow->next;
        slow->next = NULL;
        ListNode* secondList = reverse(secondList);

        ListNode* resulthead = firstList;
        while (firstList)
        {
            ListNode* temp1 = firstList;
            firstList = firstList->next;
            temp1->next = secondList;

            ListNode* temp2 = secondList;
            secondList = secondList->next;
            temp2->next = firstList;
        }
        
        head = resulthead;
    }
};

int main(){
    
    return 0;
}