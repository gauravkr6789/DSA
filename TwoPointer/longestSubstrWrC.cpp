#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longest_SubStr_WithoutRepeating_Char(string s) {
    int n = s.length();
    vector<bool> vis(26, false); 
    int left = 0, right = 0, maxlen = 0;

    while (right < n) {
        
        while (vis[s[right] - 'a']) {
            vis[s[left] - 'a'] = false;
            left++;
        }
        
        vis[s[right] - 'a'] = true;

        maxlen = max(maxlen, right - left + 1);
        right++;
    }
    return maxlen;
}

int main() {
    string s = "abcabcbb";
    int result = longest_SubStr_WithoutRepeating_Char(s);
    cout << "max length of without repeat character : " << result;
}
