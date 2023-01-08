#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int ss = s.size();
        string a = "";
        
        for (int i = 0; i < ss; i++)
        {
            a = a + 'a';
        }
        

        for (int i = 0; i < indices.size(); i++)
        {
            a[indices[i]] = s[i];
        }
        
        return a;
    }
};

int main(){
    
    return 0;
}