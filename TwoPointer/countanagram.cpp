#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool allZeros(vector<int>&counter){
    for(int i=0;i<counter.size();i++){
        if(counter[i] != 0){
            return false;
        }
    }
    return true;
}
int Count_Anagram(string pat,string text){
    int n=text.length();
    vector<int>counter(26,0);
    for(int i=0;i<pat.length();i++){
        char ch=pat[i];
        counter[ch-'a']++;
    }

    int i=0,j=0,result=0;
    int targetlength=pat.length();
    while(j < n){
        counter[text[j]-'a']--;
        if(j-i+1 == targetlength ){
            if(allZeros(counter)){
                result++;
                
            }
            counter[text[i]-'a']++;
            i++;
            
        }
        j++;
    }
    return result;
}

int main(){
    string text="forxxorfxdofr";
    string pat="for";
    cout<<"Count of occurance : "<<Count_Anagram(pat,text);
}