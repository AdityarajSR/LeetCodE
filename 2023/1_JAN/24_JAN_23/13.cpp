#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mp;
        mp.insert(make_pair('I', 1));
        mp.insert(make_pair('V', 5));
        mp.insert(make_pair('X', 10));
        mp.insert(make_pair('L', 50));
        mp.insert(make_pair('C', 100));
        mp.insert(make_pair('D', 500));
        mp.insert(make_pair('M', 1000));

        int size = s.size();
        int sum = 0;

        for (int i = 0; i < size; i++)
        {
            if(mp[s[i+1]] <= mp[s[i]]){
                sum += mp[s[i]];
            }else if(mp[s[i+1]] > mp[s[i]]){
                i += 1;
                sum = sum + mp[s[i+1]] - mp[s[i]];
            }
        }
        return sum;        
    }
};

int main()
{

    return 0;
}