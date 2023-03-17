#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<char,int> m1 = {
        {'a',1},
        {'b',2},
        {'c',3},
        {'d',6}
    };
    m1.insert(make_pair('d', 4));
    m1.insert(make_pair('d', 5));
    for (auto itr: m1) {
      cout << itr.first << " -> " << itr.second << endl;
    }
    cout << "Multimap size before clearing: " << m1.size() << endl;
    m1.erase('d');
    cout << "Multimap size after clearing: " << m1.size();
    
    return 0;
}
