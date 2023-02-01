#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int a = items.size();
        string x = "type";
        string y = "color";
        string z = "name";

        int count = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(x == ruleKey){
                    if(items[i][0] == ruleValue){
                        count++;
                    }
                }else if(y == ruleKey){
                    if(items[i][1] == ruleValue){
                        count++;
                    }
                }else{
                    if(items[i][2] == ruleValue){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}