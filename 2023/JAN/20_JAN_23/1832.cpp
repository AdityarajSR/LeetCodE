#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<int> s;
        
        int sizeis = sentence.size();

        for (int i = 0; i < sizeis; i++)
        {
            s.insert(sentence[i]);
        }
        
        for (int i = 97; i < 123; i++)
        {
            if(s.find(i) == s.end()){
                return false;
            }
        }
        return true;           
    }
};

int main(){
    
    return 0;
}