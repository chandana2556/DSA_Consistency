//Search for an Element 

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,20,30,4,5};
    int target=30;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            cout<<i;
        }else{
            cout<<"Not Found";
        }
    }
}
