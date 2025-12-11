#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size()) return false; 

    vector<int> freqArray(26, 0);

    
    for (char ch : s) {
        freqArray[ch - 'a']++;
    }

    
    for (char ch : t) {
        freqArray[ch - 'a']--;
    }

    
    for (int val : freqArray) {
        if (val != 0) return false;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "margana";
    cout << (isAnagram(s, t) ? "True" : "False") << endl;
}
