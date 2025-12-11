#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(pair<char,int> a, pair<char,int> b) {
    return a.second > b.second;  
}

int main() {
    string str = "tree";
    unordered_map<char,int> freq;

    
    for(char ch : str) freq[ch]++;

    vector<pair<char,int>> vec(freq.begin(), freq.end());

    
    sort(vec.begin(), vec.end(), cmp);

    
    for(auto p : vec) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
