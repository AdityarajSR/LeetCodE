#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
            if (pq.size() > 2)
            {
                pq.pop();
            }
        }
        int a = pq.top() - 1;
        pq.pop();
        int b = pq.top() - 1;

        int res = a * b;

        return res;
    }
};

int main(){
    
    return 0;
}