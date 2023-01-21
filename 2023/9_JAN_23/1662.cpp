#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int a = word1.size();
        int b = word2.size();

        string s1 = "";
        string s2 = "";

        for (int i = 0; i < a; i++)
        {
            s1 = s1 + word1[i];
        }
        for (int i = 0; i < b; i++)
        {
            s2 = s2 + word2[i];
        }

        int ans = 0;
        if(s1.size() == s2.size()){
            for (int i = 0; i < s1.size(); i++)
            {
                if(s1[i] != s2[i]){
                    ans = 1;
                    break;
                }
            }
            if(ans == 0){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
        
        
    }
};

int main(){
    
    return 0;
}