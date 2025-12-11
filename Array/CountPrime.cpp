#include<iostream>
#include<vector>
using namespace std;
int CountPrime(int number){
    int countPrime=0;
    vector<bool>isprime(number+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i<=number;i++){
        for(int j=i*i;j<=number;j=j+i){
            isprime[j]=false;
        }
    }

    for(int i=2;i<=number;i++){
        if(isprime[i]){
            countPrime++;
        }
    }
    cout<<countPrime;
    
}
int main(){
    CountPrime(2);
}