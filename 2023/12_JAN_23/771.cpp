#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int a = stones.size();
        int b = jewels.size();
        int counts = 0;
        unordered_set<int> s;
        for (int i = 0; i < b; i++)
        {
            s.insert(jewels[i]);
            /* code */
        }

        for (int i = 0; i < a; i++)
        {
            if(s.find(stones[i])!=s.end()){
                counts++;
            }
        }
        return counts;
        
    }
};

    // int numJewelsInStones(string J, string S) {
    //     int res = 0;
    //     unordered_set<char> setJ(J.begin(), J.end());
    //     for (char s : S)
    //         if (setJ.count(s)) res++;
    //     return res;
    // }

int main(){
    
    return 0;
}