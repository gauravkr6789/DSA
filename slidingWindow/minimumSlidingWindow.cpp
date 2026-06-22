/*#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;

string minWindow(string s, string target)
{
    int stringlen = s.length();
    int targetlen = target.length();

    if (targetlen > stringlen) return "";

    unordered_map<char, int> map;
    for (char ch : target)
    {
        map[ch]++;
    }

    int left = 0, right = 0;
    int requireCount = targetlen;
    int startingIndex = 0;
    int minWindowSize = INT_MAX;

    while (right < stringlen)
    {
        char ch = s[right];
        if (map[ch] > 0)
        {
            requireCount--;
        }
        map[ch]--;

        while (requireCount == 0)
        {
            int currWindow = right - left + 1;
            if (minWindowSize > currWindow)
            {
                minWindowSize = currWindow;
                startingIndex = left;
            }

            map[s[left]]++;
            if (map[s[left]] > 0)
            {
                requireCount++;   
            }
            left++;
        }
        right++;
    }

    return (minWindowSize == INT_MAX) ? "" : s.substr(startingIndex, minWindowSize);
}

int main()
{
    string str = "ADOBECODEBANC";
    string tar = "ABC";
    string result = minWindow(str, tar);
    cout << "Minimum substring containing all characters: " << result << endl;
}*/


 #include<iostream>
 #include<unordered_map>
 #include<climits>
 using namespace std;
 string minWindow(string s ,string t ){
    unordered_map<char,int>freq;
    int targetLen=t.length();
    for(int i=0;i<targetLen;i++){
        freq[t[i]]++;
    }
    int startingIndex=0;
    int left=0;
    int right=0;
    int stringLen=s.length();
    int remainingCount=t.length();
    int minLen=INT_MAX;

    while(right < stringLen){
        char ch=s[right]-'a';
        if(freq[ch] > 0){
            remainingCount--;
        }
        freq[ch]--;

        //remaining count : 0-->// minlen calculate shrink

        while(remainingCount == 0){
            minLen=min(minLen,right-left+1);
            startingIndex=left;

            freq[left]++;
            if(freq[left] > 0){
                remainingCount++;
            }
            left++;
        }
        right++;
    }
    if(minLen == INT_MAX){
        return " ";
    }
    else{
        return s.substr(startingIndex,minLen);
    }
    
 }

 int main(){
    string str="ADOBECODEBANC";
    string t="ABC";
    string result=minWindow(str,t);
    for(int i=0;i<result.length();i++){
        cout<<result[i];
    }
 }


