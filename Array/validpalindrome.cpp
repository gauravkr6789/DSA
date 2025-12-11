#include<iostream>
using namespace std;
void countDigit(int n){
    int count=0;
    int temp=n;
   
    while(temp > 0){
        int rem=temp%10;
        if(n % rem == 0){
          count++;
        }
        temp=temp/10;
        //cout<<"inner -temp="<<temp<<endl;
    }
    //cout<<"Count : "<<count<<endl;
    //cout<<"n="<<n;
    //cout<<"outer -temp="<<temp;
}
int main(){
    
    countDigit(2446);
}
