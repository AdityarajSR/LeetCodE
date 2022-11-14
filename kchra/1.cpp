#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int nn;
        cin>>nn;

        int a[nn];
        for (int i = 0; i < nn; i++)
        {
            cin>>a[i];
        }
        
///////////////////////////////////////////////////////
    sort(a, a+nn);

    int ans = findGCD(a,nn);
    if(ans == 1){
        cout<<sizeof(a);
    }else{
        
    }




    }
    
    return 0;
}