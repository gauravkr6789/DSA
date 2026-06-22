/*Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1*/

#include<iostream>
using namespace std;

int getsum(int number){
   int sumOfSquare=0;
   while(number > 0){
       int rem=number%10;
       sumOfSquare+=rem*rem;
       number=number/10;
   }
   return sumOfSquare;
}

bool ishappy(int n){
    if(n == 1){
        return true;
    }

    int sum=getsum(n);
    return ishappy(sum);
}

int main(){
    bool ans=ishappy(19);
    if(ans){
        cout<<"this is happy number ";
    }
    else{
        cout<<"not happy";
    }
    
}