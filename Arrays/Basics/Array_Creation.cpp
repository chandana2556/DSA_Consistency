#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5}; //Creation
    cout<<arr[2]<<"\n";     //print
    arr[2]=10;          //update 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";   //traverse and print
    }
}