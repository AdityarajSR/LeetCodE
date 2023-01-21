#include <bits/stdc++.h>
using namespace std;

                                                          // new approach learnt
                                                          // new approach learnt
                                                          // new approach learnt

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        int a = s.size();
        int b = t.size();

        if(a == b) return false;

        for (int i = 0; i < a; i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        if(mp.size() == 0){
            return true;
        }else{
            return false;
        }
        
    }
};

int main(){
    
    return 0;
}