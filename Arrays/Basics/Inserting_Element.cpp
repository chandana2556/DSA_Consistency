// Inserting a Element
#include<iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40};
    int size=4;
    int Element=25;
    int position=2;
    for(int i=size-1;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=Element;
    size++;
    cout<<"Array of insertion";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}