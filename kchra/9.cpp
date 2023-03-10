#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        cout<<"Iteration is being done for "<<i<<endl;
        i = i+2;
        cout<<i<<endl;
    }
    
    return 0;
}