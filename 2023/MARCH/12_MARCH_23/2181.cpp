#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};


class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* ans = new ListNode;
        while (temp)
        {
            int sum = 0;
            while (temp->val != 0)
            {
                sum += temp->val;
                temp = temp->next;
            }
            ListNode* t = new ListNode;
            ans->next = t;
            t->val = sum;
            t->next = NULL;
                   
        }
        // temp->next = NULL;
        return ans;
    }
};

int main(){
    
    return 0;
}