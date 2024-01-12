

//comparison operator-> gives answer in yes or no.
// {==
// <,>
// <=, >=,
// != }

// operators precedence
// {> , <, >=, <=} > {==, !=}
// Associativity: left to right

// #include<iostream>
// using  namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter a";
//     cin>>a;
//      cout<<"Enter b";
//     cin>>b;

//     if(a==b){
//         cout<<"yes";
//     }
//     else
//     cout<<"no";
    

// }


//Logical operator
// {&&, ||, !}
//  and or  not
// x&&y return 1 if both x and y are non zeroes.
// it will return 0 if any one from x and y is zero.
//x || y will return 1 if any one of them is non-zero. It return zero if both x nd y are zero.
// !x-> will return zero if x is non-zero.
// !x will return 1 if x is zero.

// #include<iostream>
// using namespace std;
// int main(){
//     int b=1;
//     int c = !b;
    
//     cout<<c;
// }

// #include<iostream>
// using namespace std;
// int main(){
//  int a,b,c;
//  cin>>a>>b>>c;
//  if(a>b && a>c){
//     cout<<"yes";
//  }
    
// }


///Bitwise operator////
// & -biwise AND
// | BITWISE or
// ^ BITWISE XOR
// ~ Compliment
// << left shift operator
// >> right shift operator
//2&3->  converts to bit form and then perform and operation on bits.
//2!3-> perform OR operation on bits.
// 2^3: performed on bits-> 0 0 -> 0, 1 1-> 0, 1 0-> 1, 01->1


//left shift operator
// 6<<1
//110 shift left by 1
// 1100
//=> result = num*2^(no of shift)

//right shift
//6>>1
//110
//011 -> 3
//result in right shift operator = num/2^(x)


//~5 complement
// 00000000000000000000000000000101 ---> 32 bits
//complement converts one into 0 and zero into one.
//11111....101-> 010 = 2

//precedence
// {<<, >>} > {& | ^}

// #include<iostream>
// using namespace std;
// int main(){
//     int a = ~-110;
//     cout<<a;
// }

//Assignment operator///
//a=3  3 is put into a.
