#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>freq;
    string arr[]={"apple","banana","cherry","apple","cherry"};
    for(string s:arr)
        freq[s]++;
    for(auto it:freq)
        cout<<it.first<<"->"<<it.second<<endl;
}