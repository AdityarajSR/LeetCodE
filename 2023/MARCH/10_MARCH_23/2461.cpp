#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumSubarraySum(vector<long long> &nums, long long k)
    {
        long long i = 0;
        long long j = 0;
        long long sum = 0;
        long long mx = 0;
        unordered_map<long long, long long> s;
        while (j<nums.size())
        {
            s[nums[j]]++;
            sum += nums[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1 == k){
                if(s.size() == k){
                    mx = max(mx, sum);
                }
                sum -= nums[i];
                s[nums[i]]--;
                if(s[nums[i]] == 0){
                    s.erase(nums[i]);
                }
                j++;
                i++;
            }  
        }
        return mx;
    }
};

int main()
{

    return 0;
}