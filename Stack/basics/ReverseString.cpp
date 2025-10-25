#include<iostream>
#include<stack>
using namespace std;
string reverseString(const string &s){
    stack<char>st;        //create an empty stack
    for(char c : s)
        st.push(c);       //push into empty stack
    string reversed="";
    while(!st.empty()){
        reversed+=st.top();
        st.pop();             //reverse 
    }
    return reversed;   
}
int main(){
    string s;
    cout<<"Enter String";
    cin>>s;
    
    string result=reverseString(s);
    cout<<result;
    
}