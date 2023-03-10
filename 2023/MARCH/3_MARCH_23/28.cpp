#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = haystack.size();
        int b = needle.size();
        for (int i = 0; i < a-b+1; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if(needle[j] != haystack[i+j]){
                    break;
                }
                if(j == b-1) return i;
            }
        }
        return -1;        
    }
};

int main(){
    
    return 0;
}