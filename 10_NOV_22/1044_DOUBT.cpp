#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        int i = 0;
        string res;
        while (s[i])
        {
            if (s[i] != s[i + 1])
            {
                res += s[i];
                i++;
            }
            if (s[i + 1] && s[i] == s[i + 1])
            {
                while (s[i + 1] && s[i] == s[i + 1])
                {
                    i++;
                }
                i++;
            }
        }
        return res;
    }
};

int main()
{

    return 0;
}