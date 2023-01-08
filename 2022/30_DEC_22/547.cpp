#include <bits/stdc++.h>
using namespace std;

class Solution
{

private:
    void dfs(int node, vector<int> adjls[], int vis[])
    {
        vis[node] = 1;
        for(auto it : adjls[node]){
            if(!vis[it]){
                dfs(it,adjls, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected)
    {
        // code here

        // To convert adj matrix input into adj list
        int V = isConnected.size();
        vector<int> adji[V];
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (isConnected[i][j] == 1 && i != j)
                {
                    adji[i].push_back(j);
                    adji[j].push_back(i);
                }
            }
        }

        // Modified function to get count
        int vis[V];
        for (int i = 0; i < V; i++)
        {
            vis[i] = 0;
        }
        

        int ct = 0;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                ct++;
                dfs(i, adji, vis);
            }
        }

        return ct;
    }
};

int main(){
    
    return 0;
}