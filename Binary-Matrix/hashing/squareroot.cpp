#include<iostream>
using namespace std;
int sqt(int n ){
    int start=0;
    int end=n;
    int mid=(start+end)/2;
    while(start <= end){
        int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result=sqt(n);
    cout<<"Square root of "<<n<<" is: "<<result<<endl;
    return 0;
}