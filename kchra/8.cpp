#include <bits/stdc++.h>
using namespace std;

int func(int a, int b){
    return a*3 &&  3*b;
}

int main(){
    int x = 3;
    int y = 4;
    bool a = func(x, y);
    cout<<a<<endl;
    

    return 0;
}