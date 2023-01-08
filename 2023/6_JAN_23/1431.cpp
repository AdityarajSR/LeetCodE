#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> b;
        int a = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= a){
                b.push_back(true);
            }else{
                b.push_back(false);
            }
        }
        return b;
    }
};

int main(){
    
    return 0;
}