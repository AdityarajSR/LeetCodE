#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        float a = points.size();
        unordered_map<float, float> mp;

        for (float i = 0; i < a - 1; i++)
        {
            for (float j = i + 1; j < a; j++)
            {
                float slope;
                if ((points[i][1] - points[j][1]) == 0)
                {
                    int slope = std::numeric_limits<int>::max();
                    mp[slope]++;
                }
                else
                {
                    slope = (points[i][0] - points[j][0]) / (points[i][1] - points[j][1]);
                    mp[slope]++;
                }
            }
        }
        int ans = INT_MIN;
        for (auto it : mp)
        {
            if (it.second > ans)
            {
                ans = it.second;
            }
        }
        return ans;
    }
};

float main()
{

    return 0;
}