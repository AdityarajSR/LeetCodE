#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int n = accounts.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < accounts[i].size(); j++)
            {
                if (j == 0)
                {
                    accounts[i][j] = accounts[i][0];
                }
                else if (j == 1)
                {
                    accounts[i][j] = accounts[i][0] + accounts[i][1];
                }
                else
                {
                    accounts[i][j] = accounts[i][j] + accounts[i][j - 1];
                }
            }
        }

        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            
                if (accounts[i][accounts[i].size()-1] > mx)
                    mx = accounts[i][accounts[i].size()-1];
        
        }
        return mx;
    }
};

int main()
{

    return 0;
}