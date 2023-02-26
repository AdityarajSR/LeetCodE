#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = head->val;
        while (head->next)
        {
            ans = ans*2 + head->next->val;
            head = head->next;
        }
        
        return ans;  
    }
};


// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         queue<int> q;
//         while (head)
//         {
//             q.push(head->val);
//             head = head->next;
//         }
        
//         int size = q.size();
//         int ans = 0;
//         for (int i = 0; i < size; i++)
//         {
//             ans += (q.front())*(pow(2, 0));
//             q.pop();
//         }
//         return ans;  
//     }
// };

int main(){
    
    return 0;
}