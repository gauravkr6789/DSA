/*#include<iostream>
using namespace std;
#include<unordered_map>
void countFrequency(int arr[],int size){
    unordered_map<int, int> freqMap;
    for(int i=0; i<size; i++){
        freqMap[arr[i]]++;
    }
    for(auto pair: freqMap){
        cout<<pair.first<<" - "<<pair.second<<endl;
    }
}
int main(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr, size);
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,1,2,1,11,3,1,4,0};
    int count;
    int maxcount=0;
    for(int i=0;i<10;i++){
        count=1;
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>maxcount){
                maxcount=count;
            }
        }
        cout<<arr[i]<<" occurs "<<count<<" times."<<endl;
    }
    cout<<"The number that occurs maximum times is "<<arr[maxcount]<<" and it occurs "<<maxcount<<" times."<<endl;
    return 0;
}*/
