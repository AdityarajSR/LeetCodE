#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        int a = address.size();
        string ads = "";
        for (int i = 0; i < a; i++)
        {
            if(address[i] == '.'){
                ads = ads + "[.]";
            }else{
                ads = ads + address[i];
            }
        }
        return ads;
    }
};

int main(){
     
    return 0;
}