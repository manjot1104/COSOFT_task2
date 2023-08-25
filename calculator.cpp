#include<iostream>
using namespace std;
int main(){
    int x,y;
    char op;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"enter the operation to perform : ";
    cin>>op;
    switch(op){
        case '+':
        cout<<x<<"+"<<y<<"="<<x+y;
        break;
        case '-':
        cout<<x<<"-"<<y<<"="<<x-y;
        break;
        case '*':
        cout<<x<<"*"<<y<<"="<<x*y;
        break;
        case '/':
        if(y!=0)
        cout<<x<<"/"<<y<<"="<<x/y;
        else 
        cout<<"warning: division by zero ";
        break;
       
    default:
    cout<<op<<"is an invalid operator";
    }
    

}