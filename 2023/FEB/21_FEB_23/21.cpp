#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* head;

        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
////////////////////////////////////////////////////////////////////    
        ListNode* newnode = new ListNode;
        if(l1->val > l2->val){
            newnode->val = l2->val;
            newnode->next = NULL;
            head = newnode;
            l2 = l2->next;
        }else{
            newnode->val = l1->val;
            newnode->next = NULL;
            head = newnode;
            l1 = l1->next;
        }
///////////////////////////////////////////////////////////////////
        while (l1 != NULL || l2 != NULL)
        {
            ListNode* dmy = new ListNode;
            if(l1->val > l2->val){
                newnode->next = dmy;
                dmy->val = l2->val;
                dmy->next = NULL;
                newnode = newnode->next;
                l2 = l2->next;
            }else{
                newnode->next = dmy;
                dmy->val = l1->val;
                dmy->next = NULL;
                newnode = newnode->next;
                l1 = l1->next;
            }
        }
///////////////////////////////////////////////////////////////////
        if(l1){
            newnode->next = l1;
        }else{
            newnode->next = l2;
        }
///////////////////////////////////////////////////////////////////
        return head;        
    }
};

int main(){
    
    return 0;
}