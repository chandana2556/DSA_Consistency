//count even numbers
#include<iostream>
using namespace std;

int main(){
    int arr[9]={12,2,3,4,5,6,8,2,4};
    int n=9;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<count;
}
