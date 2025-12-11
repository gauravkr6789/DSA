#include<iostream>
#include<vector>
using namespace std;
int longestSubstr_K_UniqueChar(string str, int n, int uniqueCharCount) {
    int left = 0, right = 0;
    int distinctCharCount = 0;
    int maxCount = 0;
    vector<int> CountFreq(26, 0);

    while (right < n) {
        char ch = str[right];
        CountFreq[ch - 'a']++;
        if (CountFreq[ch - 'a'] == 1)
            distinctCharCount++;

        while (distinctCharCount > uniqueCharCount) {
            CountFreq[str[left] - 'a']--;
            if (CountFreq[str[left] - 'a'] == 0)
                distinctCharCount--;
            left++;
        }

        if (distinctCharCount == uniqueCharCount)
            maxCount = max(maxCount, right - left + 1);

        right++;
    }

    return maxCount;
}

int main(){
    string s="aabebebebcbe";
    int n=s.length();
    int k=3;
    int ans=longestSubstr_K_UniqueChar(s,n,k);
    cout<<"longest substring containing "<<k<<" "<<"distinct character is : "<<ans;
}
