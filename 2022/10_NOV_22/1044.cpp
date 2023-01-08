#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    string ans = "";
    for (auto &i: s) {
        //if current element of original string matches to last appended element of ans
        if (i == ans.back()){
            //remove that element from ans
            ans.pop_back();
        }
        else{
            //append that element to ans
            ans += i;
        }
    }
    return ans;
}

int main()
{

    return 0;
}