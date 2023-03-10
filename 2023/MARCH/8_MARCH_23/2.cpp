#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dmy = new ListNode;
        ListNode* temp = dmy;
        int carry = 0;

        while (l1 || l2 || carry){
            int sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum/10;
            ListNode* node = new ListNode();
            node->val = sum%10;
            temp->next = node;
            temp = temp->next;
        }
        return dmy->next;
        
    }
};

int main(){
    
    return 0;
}