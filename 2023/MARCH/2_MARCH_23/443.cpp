#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        int count = 0;
        for (int i = 0; i < size-1; i++)
        {
            int freq = 1;
            while (chars[i] == chars[i+1] && i < 6)
            {
                freq++;
                i++;
            }
            
            if(freq>1){
                count = count + freq + 1;            
            }else{
                
            }
        }
        return count;
        
    }
};

int main(){
    
    return 0;
}