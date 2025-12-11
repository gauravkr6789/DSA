#include<iostream>
using namespace std;
int sumOfnatural(int number){
    //base case
    if(number == 1){
        return 1;
    }
    
    return number+sumOfnatural(number-1);
    
}
int main(){
    int n=5;
    cout<<sumOfnatural(n);
}