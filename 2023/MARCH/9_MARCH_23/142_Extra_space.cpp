#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        if(!head || !head->next) return NULL;
        unordered_map<ListNode *, int> mp;
        int i = 0;

            while (mp.find(head) == mp.end() && head)
            {
                ListNode *temp = head;
                mp.insert(make_pair(temp, i));
                head = head->next;
                i++;
            }


        if(head == NULL){
            return NULL;
        }else{
            return mp.find(head)->first;
        }
    }
};

int main()
{

    return 0;
}