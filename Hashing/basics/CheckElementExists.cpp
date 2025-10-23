#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>st={1,3,5,7};
    int target=9;
    if(st.count(target))
        cout<<"Found";
    else
        cout<<"Not Found";
}