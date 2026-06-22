#include <iostream>
using namespace std;
int differenceOfSums(int n, int m)
{
    int SumOfDiv=0;
    for(int i=1;i<=n;i++){
        if(i % m == 0){
           SumOfDiv+=i;
        }
        
    }
    int SumOfNonDiv=0;
    for(int i=1;i<=n;i++){
        if(i % m != 0){
            SumOfNonDiv+=i;
        }
    }
    int ans=SumOfNonDiv-SumOfDiv;
    return ans;
}

int main(){
    int n=10;
    int m=3;
    int res=differenceOfSums(n,m);
    cout<<"ans is : "<<res;
}