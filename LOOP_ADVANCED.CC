 //Loop Advanced problems:
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=100; i<=200; i=i+1)
//     cout<<i<<endl;
// }

//printing a+z OR A-Z
// #include<iostream>
// using namespace std;
// int main(){
//    char alpha;
//    for(alpha='A'; alpha<='Z'; alpha = alpha+1){
//      cout<<alpha<<endl;
//    }
// }


//printig 10 to 1.
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=10; i>=1; i=i-1)
//     cout<<i<<endl;
// }

//table of 6
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1; i<=10; i=i+1)
//     cout<<"6*"<<i<<"-> "<<6*i<<endl;
// }


//finding power of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int val=1, pow,num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     cout<<"Enter the power of number: ";
//     cin>>pow;
//     for(int i=1; i<=pow; i=i+1){
//     val = val*num;}
//     cout<<"Value of "<< num <<" to the power "<<pow <<" is "<< val;

// }

//sum of n natural numbers
// #include<iostream>
// using namespace std;
// int main(){
//     // int num,sum=0;
//     // cout<<"Enter the num: ";
//     // cin>>num;

//     // for(int i=1;i<=num;i++){
//     //     sum = sum+i;
//     // }
//     //alt
//     int n;
//     cout<<"Enter the num: ";
//     cin>>n;
 
//     int sum = (n*(n+1)/2);
//     cout<<"Sum of first "<<n<<" natural number is :"<<sum;
// }

//factorial of a number
// #include<iostream>
// using namespace std;

// int main(){
//     int num, fact=1;
//     cout<<"Enter the num: ";
//     cin>>num;

//     if(num==0 || num==1)
//     {cout<<"Factorial is 1";
//     }

//     else{
//         for(int i=num; i>=1; i--){
//             fact = fact*i;
//         }
//     }
// cout<<"The factorial of given number is: "<<fact;
// }


//Prime number
//any number divided by 1 and itself.

// #include <iostream>
// using namespace std;

// int main(){
//     int num, i;
//     cout<<"Enter the number: ";
//     cin>>num;
    
//     if(num<2){
//         cout<<"Not prime";
//         return 0;
//     }
//     else{
//         for(i=2; i<num; i++)
//     {
//         if(num%i == 0)
//         {cout<<"Not Prime.";
//         return 0;
//         }
//     }
//      cout<<"Prime";
//      return 0;
//     }
    
// }

//Fibonacci Series
// // 0 1 1 2 3 5 8 13 21 34.....
//we have to rake three variables
// in every subsquent step we are assigining prev to last and curr to prev
// last prev curr 
// 0     1    1
// 1     1    2
// 1     2    3
// 2     3    5
// 3     5    8 ....





