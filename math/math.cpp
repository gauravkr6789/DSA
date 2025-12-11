// count digit 

/*#include<iostream>
using namespace std;
void CountDigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"Number of digits : "<<count<<endl;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    CountDigit(num);
    return 0;
}*/


// reverse number

/*#include<iostream>
using namespace std;
void Reverse(int n){
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<"Reverse number is : "<<rev<<endl;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    Reverse(num);
    
    return 0;
}*/

// palindrome

/*#include<iostream>
using namespace std;
void checkpal(int n){
    int temp=n,rev=0;
    while(temp!=0){
        int digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(n==rev)
        cout<<n<<" is a palindrome"<<endl;
    else
        cout<<n<<" is not a palindrome"<<endl;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    checkpal(num);
    return 0;
}*/

// armstrong number 

/*#include<iostream>
using namespace std;
bool IsArmstrong(int n){
    int temp=n;
    int rem=0;
    int sum=0;
    while(n!=0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(IsArmstrong(num)){
        cout<<num<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<num<<" is not an Armstrong number."<<endl;
    }
    return 0;
}*/

// all divisor

/*#include<iostream>
using namespace std;
void SumOfall_divisors(int n){
    int sum=0;
    cout<<"Divisors of "<<n<<" are: ";
    for(int i=1;i<=n;i++){
        if(n%i==0){
           sum+=i;
           
        }
    }
    cout<<endl;
    cout<<"Sum of all divisors : "<<sum<<endl;
    return;
 
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    SumOfall_divisors(num);
    return 0;
}*/

/*#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool findprime(int s,int e){
    for(int i=s;i<e;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    findprime(1,100);
   
    return 0;
}*/

/*#include<iostream>
using namespace std;

int countdigit (int n){
    int temp=n;
    int cnt=0;
    int rem=0;
    while(n>0){
        rem=n%10;
        if(rem!=0 && temp% rem == 0){
            cnt++;
        }
        
        n=n/10;
    }
    return cnt;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"count : "<<countdigit(num);
}*/

/*#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int rem=0;
        int rev=0;
        while(x>0){
            rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        
        
        cout<<rev;
}*/





/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
              sum=sum+j;
            }
        }
    }
   
}*/


#include<iostream>
using namespace std;
void print(int n){
    while(n>0){
        cout<<"Gfg"<<" ";
        return print(n-1);
        
    }
}
int main(){
   print(10);

}





















