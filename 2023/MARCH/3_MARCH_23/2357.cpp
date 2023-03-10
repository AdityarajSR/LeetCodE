#include <bits/stdc++.h>
using namespace std;

// O(n)
class Solution {
public:
        int minimumOperations(vector<int>& A) {
        unordered_set<int> s(A.begin(), A.end());
        return s.size() - s.count(0);
    }
};


// O(n^2) + Very Bad Time Complexity
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int size = nums.size();
        int arr[size];
        int ct = 0;
        for (int i = 0; i < size; i++)
        {
            arr[i] = nums[i];
        }
        
        sort(arr, arr+size);
        for (int i = 0; i < size; i++)
        {
            int &min = *min_element(arr+i, arr+size);
            if(min != 0){
                for (int j = 0; j < size; j++)
                {
                    if(arr[j] != 0){
                        arr[j] -= min;
                    }
                }
                ct++;
            }
        }
        return ct;
    }
};

int main(){
    
    return 0;
}