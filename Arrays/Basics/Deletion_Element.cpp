//Deletion of a Element
#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5};
    int size=5;
    int position=2;
    for(int i=position;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"Array After Deletion\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}