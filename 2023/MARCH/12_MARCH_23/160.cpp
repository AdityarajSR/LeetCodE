#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

// O(n+m) vala solution 
// Iske neeche hashmap vala soution bhi hai

// class Solution {
// public:
// 	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
// 		ListNode *ptr1 = headA;
// 		ListNode *ptr2 = headB;
// 		while(ptr1 != ptr2){
// 			if(ptr1 == NULL){
// 				ptr1 = headB;
// 			}
// 			else{
// 				ptr1 = ptr1 -> next;
// 			}
// 			if(ptr2 == NULL){
// 				ptr2 = headA;
// 			}
// 			else{
// 				ptr2 = ptr2 -> next;
// 			}
// 		}
// 		return ptr1;
// 	}
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s;
        ListNode* ans = NULL;
        while (headA)
        {
            s.insert(headA);
            headA = headA->next;
        }

        while (headB)
        {
            if(s.find(headB) != s.end()){
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
        
    }
};

int main(){
    
    return 0;
}