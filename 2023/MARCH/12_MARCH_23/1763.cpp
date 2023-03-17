#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestNiceSubstring(string s)
    {
        int n = s.size();
        int size = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            string test = "";
            unordered_set<int> us;
            for (int j = i; j < n; j++)
            {
                test += s[i];
                us.insert(s[i]);
                int temp = test.size();
                for (int k = 0; k < temp; k++)
                {
                    int x = test[k];
                    if(x<=90){
                        if(us.find(x+32) == us.end()){
                            temp = 0;
                            break;
                        }
                    }else{
                        if(us.find(x-32) == us.end()){
                            temp = 0;
                            break;
                        }
                    }
                }
                if(temp != 0 && temp>size){
                    ans = test;
                }
                
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}