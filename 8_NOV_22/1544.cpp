#include <iostream>
using namespace std;


class Solution {
public:
    string makeGood(string s) {
        for (int i = 0; i < s.size()-1; i++)
        {
            if (toupper(s[i]) == s[i+1])
            {
                if (i+1 > s.size())
                {
                s.erase(s[i+1]);
                    /* code */
                }
                
                s.erase(s[i]);
            }
            if (tolower(s[i]) == s[i+1])
            {
                if (i+1 > s.size())
                {
                s.erase(s[i+1]);
                    /* code */
                }
                
                s.erase(s[i]);
            }
        }
    return s;
    }
};

int main(){
    
    return 0;
}