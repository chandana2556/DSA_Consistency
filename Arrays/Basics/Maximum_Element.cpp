//Maximum Element
#include<iostream>
using namespace std;

int main(){
    int arr[6]={2,5,9,3,4,1};
    int max_num=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max_num){
            max_num=arr[i];
        }
    }
    cout<<max_num;
}