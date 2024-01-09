#include<iostream>
using namespace std;
int main(){
    // int a,b;
    // cout<<"Enter first number";
    // cin>>a;

    // cout<<"Enter second number";
    // cin>>b;

    // cout<<"Sum of both number: "<<a+b;

    int a=10;
    char b = 'e';
    a=b;  //here since b is char and a is int. so it will be typecasted into into i.e. its ASCII value. and then stored.
    //ASCII of e is 101. so 101 will be stored into a.
    cout<<a;
     
     int d=66;
    b=d;  //since b is char type so it will store 66 as B.
    cout<<b;
    //when we insert interger into character datatype, integer is 32 bits and char is 4 bits. So, there is higher chance of data loss as 32 bits are going to be unfit into 4 bits.
     //only last 8 bits of integer is fitted into char of 8 bits.
    // favourable condition: bool->char->int->double
}