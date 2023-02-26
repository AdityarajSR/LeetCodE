#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        int s = tasks.size();
        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < s; i++)
        {
            mp[tasks[i]]++;
        }
        

        if(ans == -1) return ans;

        for (auto it : mp)
        {
            int x = it.second;
            if (x % 3 == 1)
            {
                ans += (x - 4) / 3 + 2;
            }else if(x % 3 == 2){
                ans += x/3 + 1;
            }else{
                ans += x/3;
            }
        }

        int ab = 0;
        for (auto it : mp)
        {
            if (it.second == 1){
                ab = -1;
                ans = ab;
                break;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}