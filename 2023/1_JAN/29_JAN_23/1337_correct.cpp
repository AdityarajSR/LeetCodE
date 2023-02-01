#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        set<pair<int,int>> s;
        vector<int> res;
        for(int i=0;i<m;i++)
        {
            int count=countSoldiers(mat[i]);
            s.insert({count,i});
        }
       
        set<pair<int,int>>::iterator i;
        for( i=s.begin();i!=s.end();i++)
        {  if(k==0)
           break;
            res.push_back(i->second);
            k--;
        }
       return res;

    }
    int countSoldiers(vector<int>arr)
    {
          int n=arr.size();
          int low=0,high=n-1;
          int count=0;
          while(low<=high)
          {
              int mid=low+(high-low)/2;
              if(arr[mid]==1)
              {
                low=mid+1;
                count=mid+1;
              }
              else
              high=mid-1;
          }
          return count;
    }
};

int main(){
    
    return 0;
}