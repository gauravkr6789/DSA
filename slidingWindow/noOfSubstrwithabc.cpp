/*#include<iostream>
#include<unordered_map>
using namespace std;
bool isContain_abc(string s){
    unordered_map<char,int>countChar;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        countChar[ch]++;
    }
    return countChar['a'] > 0 && countChar['b'] > 0 && countChar['c'] > 0;
}
int noOfSubStrContain_abc(string s){
    int SubtringCount=0;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            if(isContain_abc(s.substr(i,j-i+1))){
                SubtringCount++;
            }
        }
    }
    return SubtringCount;
}
int main(){
    string s="abcabc";
    int ans=noOfSubStrContain_abc(s);
    cout<<"Number Of Substring with containing a b c : "<<ans;
    return 0;
    
}*/


#include <iostream>
#include <unordered_map>
using namespace std;

int noOfSubStrContain_abc(const string &s) {
    int n = s.length();
    int left = 0;
    int count = 0;
    unordered_map<char, int> freq;
    int have = 0; 

    for (int right = 0; right < n; right++) {
        
        freq[s[right]]++;
        if ((freq[s[right]] == 1) && ((s[right] == 'a') || (s[right] == 'b') || (s[right] == 'c'))) {
            have++;
        }

       
        while (have == 3) {
            // ab window [left...right] valid hai
            // iska matlab is window ke saare substrings jinke right >= current right, valid honge
            count += (n - right);

            if (((--freq[s[left]]) == 0) && ((s[left] == 'a') || (s[left] == 'b') || (s[left] == 'c'))) {
                have--;
            }

            left++;
        }
    }

    return count;
}

int main() {
    string s = "abc";
    cout << "Number of substrings containing a, b, and c: " 
         << noOfSubStrContain_abc(s) << endl;
    return 0;
}
