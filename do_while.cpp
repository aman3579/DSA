// //factor a num
// #include<iostream>
// using namespace std;
// int main(){
//     int num,div=1,rem;
//     cout<<"Enter the number: ";
//     cin>>num;
//     cout<<"The facors are: ";
//     while(div<=num){
//         rem = num%div;
//         if(rem==0){
//             cout<<div<<" ";
//         }
//         div = div+1;
//     }
// }

//do while loop;
//initalize-->update--->break conditions
//print 1 to 10
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<endl;
//         i++;
// }
//     while(i<=10);
// }

// //find sum
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,sum=0;
//     do{
//         sum = sum+i;
//         i++;
// }
//     while(i<=10);
//     cout<<"Sum is "<<sum;
// }

//break
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     while(i<=10){
//         if(i==4)
//         break;
//         cout<<i<<" ";
//         i++;
//     }
    
//continue
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1; i<=10;i++){
        if(i%4 ==0)
        continue;  //this will skip below statements
        cout<<i<<" ";
    }
}