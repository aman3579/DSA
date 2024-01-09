//star/pattern problems
//* * * * *
//* * * * *
//* * * * *
//* * * * *
//* * * * *
//row =1
//row<=5
// print * 5 times
// row = row+1
//for(row=1; row<=5; row++){
//     print * 5 times --- using for loop
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=1; row<=5; row++){
//         for(int column=1; column<=5; column++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


//10 10 10 10 10
//10 10 10 10 10
//10 10 10 10 10
//10 10 10 10 10

// #include<iostream>
// using namespace std;
// int main(){
//     for(int row=1; row<=4; row++){
//         for(int column=1; column<=5; column++){
//             cout<<"10 ";
//         }
//         cout<<endl;
//     }
// }

// //1 1 1 1 1
// //2 2 2 2 2 
// //3 3 3 3 3
// //4 4 4 4 4
// //5 5 5 5 5
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int row,column;
//     for(row=1; row<=5; row++){
//         for(column=1; column<=5; column++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
//  }


// //1 2 3 4 5 
// //1 2 3 4 5
// //1 2 3 4 5
// //1 2 3 4 5
// //1 2 3 4 5
// // row=1
// // row<=5
// // print 1 2 3 4 5 
// // row=row+1
// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=1; column<=5; column++){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }


// //5 4 3 2 1
// //5 4 3 2 1
// //5 4 3 2 1
// //5 4 3 2 1
// //5 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=5; column>=1; column--){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }


// //1 4 9 16 25
// //1 4 9 16 25
// //1 4 9 16 25
// //1 4 9 16 25
// //1 4 9 16 25

// #include<iostream>
// using namespace std;

// int main(){
//     for(int row=1; row<5; row++){
//         for(int column=1; column<=5; column++){
//             cout<<column*column<<" ";
//         }
//         cout<<endl;
//     }
// }


//a a a a a 
//b b b b b
//c c c c c
//d d d d d
//e e e e e

// row1
// row<=5
// print---a---5 times
// row=row+1
// print----b---5times--
// row++
// print---c---5 times-

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int row, column;
// //     char str='a';
// //     for(row=1; row<=5; row++){
// //         for(column=1; column<=5; column++){
// //             cout<<str<<" ";
// //         }
// //         str = str+1;
// //         cout<<endl;
// //     }
// // }

// //Alternate
// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         char name = 'a' + row-1;
//         {
//         for(column=1; column<=5; column++){
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }}
// }

//a b c d e
//a b c d e
//a b c d e
//a b c d e
//a b c d e

// #include<iostream>
// using namespace std;

// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=1; column<=5; column++){
//             char name = 'a' + column-1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

//alterante
// #include<iostream>
// using namespace std;

// int main(){
//     int row, column;
//     char name = 'a';
//     for(row=1; row<=5; row++){
//         for(column=1; column<=5; column++){
//             char ptr = name + column-1;
//             cout<<ptr<<" ";
//         }
//         cout<<endl;
//     }
// }

//Alternate
// #include<iostream>
// using namespace std;

// int main(){
//     char row; 
//     char column;
    
//     for(row='a'; row<='e'; row++){
//         for(column='a'; column<='e'; column++){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }


//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15
//16 17  18 19 20

// #include<iostream>
// using namespace std;

// int main(){
//     int row, column, num=1;
//     for(row=1; row<=6; row++){
//         for(column=1; column<=5; column++){
//             cout<<num<<" ";
//             num = num+1;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int row, column, num=1;
//     for(row=1; row<=6; row++){
        
//         for(column=1; column<=5; column++){
//             cout<<num<<" ";
//             num = num+1;
//         }
//         cout<<endl;
//     }
// }
// // alternate
//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15
//16 17  18 19 20
// 1st row - 1->2....
// 2nd row-6....
// 3rd row-11....
// 4th-row-16....
// 5th-row-21...
// relation: row-1*5 + col  
// #include<iostream>
// using namespace std;

// int main(){
//     int row, column;
//     for(row=1; row<=6; row++){
//         for(column=1; column<=5; column++){
//             cout<<(row-1)*5+column<<" ";
//         }
//         cout<<endl;
//     }
// }


// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
#include<iostream>
using namespace std;

int main(){
    int row;
    char column;
    for(row=1; row<=5; row++){
        for(column='F'; column<='K'; column++){
            cout<<column<<" ";
        }
        cout<<endl;
    }
}


