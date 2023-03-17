#include <bits/stdc++.h>
using namespace std;

// Using vectors having given range 
// Next subission contains soution using linked list also to avoid collisions due to hashing function

class MyHashSet {
public:
    vector<int> v;
    int size = 1e6 + 1;
    MyHashSet() {
        v.resize(size);
    }
    
    void add(int key) {
        v[key] = 1;
    }
    
    void remove(int key) {
        v[key] = 0;
    }
    
    bool contains(int key) {
        return v[key];
    }
};


int main(){
    
    return 0;
}