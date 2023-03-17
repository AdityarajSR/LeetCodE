#include <bits/stdc++.h>
using namespace std;

class MyHashSet {
    vector<list<int>> v;
    int siz;

public:
    MyHashSet() {
        siz = 100;
        v.resize(siz);
    }

    int hash(int key){
        return key%siz;
    }
    
    list<int> :: iterator search(int key){
        int i = hash(key);
        return find(v[i].begin(), v[i].end(), key);
    }
    
    void add(int key) {
        if(contains(key)) return;
        int i = hash(key);
        v[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int i = hash(key);
        v[i].erase(search(key));
    }
    
    bool contains(int key) {
        int i = hash(key);
        if(search(i) != v[i].end()) return true;
        return false;
    }
};

int main(){
    
    return 0;
}