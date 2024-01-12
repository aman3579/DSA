// //DECIMAL TO BINARY

// #include<iostream>
// using namespace std;
// int main(){
//     int num, rem, ans=0,multiply=1;
//     cout<<"Enter the number: ";
//     cin>>num;
//     while(num>0){
//         //remainder
//         rem = num%2;
//         //quotient
//         num = num/2;
//         //ans
//         ans = rem*multiply + ans;
//         //multiplier-> 10
//         multiply = multiply*10;
//     }
//     cout<<"Binary form: "<<ans;
// }

//Binary to Decimal
// #include<iostream>
// using namespace std;
// int main(){
//     int num, ans=0, mul =1,rem;
//     cout<<"Enter the number: ";
//     cin>>num;
//     while(num>0){
//         rem = num%10;
//         num = num/10;
//         ans = rem*mul + ans;
//         mul = mul *2;
//     }
//     cout<<"The Decimal form is: "<<ans;
// }

// //Decimal to octagonal
// #include<iostream>
// using namespace std;
// int main(){
//     int num, ans=0, mul =1,rem;
//     cout<<"Enter the Decimal number: ";
//     cin>>num;
//     while(num>0){
//         rem = num%8;
//         num = num/8;
//         ans = rem*mul + ans;
//         mul = mul *10;
//     }
//     cout<<"The Octagonal form is: "<<ans;
// }

//Binary to Octagonal
//Change binary to decimal and then decimal to octa
#include<iostream>
using namespace std;
int main(){
    int num, ans=0, mul1 =1,mul2=1,rem,rem2;
    int octa =0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = rem*mul1 + ans;
        mul1 = mul1 *2;
    }
    cout<<"The Decimal form is: "<<ans<<endl;;

    //Now converting to octagonal;
    while(ans>0){
        rem2 = ans%8;
        ans = ans/8;
        octa = rem2*mul2 + octa;
        mul2 = mul2*10;
    }
    cout<<"The octagonal form is: "<<octa;
}