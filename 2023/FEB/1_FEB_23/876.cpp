#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> v;
        while (head)
        {
            v.push_back(head);
            head = head->next;
        }
        int mid = v.size()/2;
        return v[mid];
    }
};

int main(){
    
    return 0;
}