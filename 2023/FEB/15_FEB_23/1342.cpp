#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int ct = 0;
        while (num!=0)
        {
            if(num&&1==0){
                num = num/2;
            }else{
                num -= 1;
            }
            ct++;
        }
        return ct;
    }
};


/////////////////////////////////////////////////////////////////////////////
// 2nd Approach

class Solution {
public:
int numberOfSteps(int num) { //  number of steps to reach 0    
        int count = 0; // number of steps 
        while(num){ // while n is not 0
            num = num & 1 ? num - 1 : num >> 1; // if n is odd, subtract 1, else right shift by 1
            count++; // increment count
        }
        return count; // return count
    }
};

int main(){
    int n = 14;


    return 0;
}