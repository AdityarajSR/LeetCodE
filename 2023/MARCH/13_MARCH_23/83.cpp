#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};




// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(!head) return NULL;
//         int value = head->val;
//         ListNode* prev = NULL;
//         while (value = head->val && head  && head->next)
//         {
//             prev = head;
//             head = head->next;
//         }
//         prev = head;

//         ListNode* prev2 = NULL;
//         while (head && head->next)
//         {
//             int val2 = head->val;
//             if(head->next->val == val2 && head->next){
//                 prev2->next = head->next;
//                 head = head->next;
//             }else{
//                 prev2 = head;
//                 head = head->next;
//             }
//         }
//         return prev;
                
//     }
// };

int main(){
    
    return 0;
}