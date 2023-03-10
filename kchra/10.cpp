#include <bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<int, int> m;
    for (int i = 0; i < 10; i++)
    {
        m[i]++;
    }
    m[5]++;
    
    
    m.find(5);
    // returns iterator to the element if present in the map 

    

    return 0;
}