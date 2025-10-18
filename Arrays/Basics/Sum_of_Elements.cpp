//Sum of Elements
#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,5,8,1,4};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
