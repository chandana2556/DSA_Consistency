//Average of Elements
#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,5,8,1,4};
    int sum=0;
    float avg;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    avg=sum/2;
    cout<<"Sum is :"<< sum<<endl;
    cout<<"Average is: "<<avg<<endl;
}