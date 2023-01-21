#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mp1[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++)
        {
            mp2[t[i]]++;
        }

        if(t.size() == s.size()){
            for(auto it : mp1){
                if(mp2.find(it.first) == mp2.end()){
                    ans = 1;
                    break;
                }else{
                    if()
                }
            }
        }
        
    }
};

int main(){
    
    return 0;
}