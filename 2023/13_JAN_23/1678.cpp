#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string s = "";
        for (int i = 0; i < command.size(); i++)
        {
            if(command[i] == 'G'){
                s += 'G';
            }else if(command[i] == '('){
                if(command[i+1] == 'a'){
                    s += 'a';
                    s += 'l';
                }else{
                    s += 'o';
                }
            }
        }
        return s;
    }
};

int main(){
    
    return 0;
}