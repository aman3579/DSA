// //        *
// //      * *
// //    * * *
// //  * * * *
// //* * * * *
// // row space star
// // 1    4      1
// // 2    3      2
// // 3    2      3
// // 4    1      4
// // 5    0      5

// // row=1
// // row<=5
// // print space- 5-row times
// // print * row-times
// //row++

// #include<iostream>
// using namespace std;
// int main(){
// int row, column;
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// for(row=1; row<=n; row++){
//     //space print
//     for(column=1; column<=n-row; column++){
//         cout<<"  ";
//     }
    
//     //star print
//     for(column=1; column<=row; column++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// }

// //         1
// //       2 2
// //     3 3 3
// //   4 4 4 4
// // 5 5 5 5 5

// // //row=1
// // row<=5
// // print space 5-row times
// // print row number- row no. times
// // row++

// #include<iostream>
// using namespace std;
// int main(){
//     int row, col, num;
//     cout<<"Enter the number of rows: ";
//     cin>>num;

//     for(row=1; row<=num; row++){
//         //print space
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         //print star
//         for(col=1; col<=row; col++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }
 

//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5
//row 1
// row<=5
// print space 5-row times
// print 1 to row no.
//  #include<iostream>
// using namespace std;
// int main(){
//     int row, col, num;
//     cout<<"Enter the number of rows: ";
//     cin>>num;

//     for(row=1; row<=num; row++){
//         //print space
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         //print star
//         for(col=1; col<=row; col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


// //        A
// //      A B
// //    A B C 
// //  A B C D
// //A B C D
// //row=1
// // row<=5
// // print space- num-row times
// // print A to .... till row no.
// //row++

// //  #include<iostream>
// // using namespace std;
// // int main(){
// //     int row, col, num;
// //     cout<<"Enter the number of rows: ";
// //     cin>>num;

// //     for(row=1; row<=num; row++){
// //         //print space
// //         for(col=1; col<=num-row; col++){
// //             cout<<"  ";
// //         }
// //         //print alphabet
// //         for(int col=1; col<=row; col++){
// //             char ptr = 'A' + col -1;
// //             cout<<ptr<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }

// //alternate
//  #include<iostream>
// using namespace std;
// int main(){
//     int row, col, num;
//     cout<<"Enter the number of rows: ";
//     cin>>num;
//     for(row=1; row<=num; row++){
//         //print space
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         //print alphabet
//         for(char colm='A'; colm<='A' + row-1; colm++){
//             // char ptr = 'A' + col -1;
//             cout<<colm<<" ";
//         }
//         cout<<endl;
//     }
// }


//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1

//row=1
//row<=5
//print space row-1 times
//print row to 1.
//row++
// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         //printing space
//         for(column=1; column<=5-row; column++){
//             cout<<"  ";
//         }
//         for(column=row; column>=1;column--){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }


//        A
//      B B
//    C C C
//  D D D D
//E E E E E

//row=1
//row<=5
// print space 5-row times
//print A- row times
//row++
// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for(row=1;row<=5; row++){
//         //printing space
//         for(col=1; col<=5-row; col++){
//             cout<<"  ";}

//             //printing characters
//             for(col=1; col<=row; col++){
//                 char ptr = 'A' + row-1;
//                 cout<<ptr<<" ";
//             }
//             cout<<endl;
//         }
        
//     }



// //        5 
// //      5 4
// //    5 4 3
// //  5 4 3 2
// //5 4 3 2 1

// //print 5-row times space
// //print 5 to 5-row+1

// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for(row=1; row<=5; row++){
//         //printing space
//         for(col=1; col<=5-row; col++){
//             cout<<"  ";
//         }
//         //printing 5 to 5-row+1
//         for(col=5; col>=5-row+1; col--){
//             cout<<col<<" ";
//             }
//         cout<<endl;
//     }
// }




//        E
//      E D
//    E D C
//  E D C B
//E D C B A

//print space 5-row times
//print E to E-row+1

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=5; row++){
        //printing space
        for(col=1;col<=5-row; col++){
            cout<<"  ";
        }
        //print E to E-row+1
        for(char ptr = 'E'; ptr>='E'-row+1; ptr--){
            cout<<ptr<<" ";
        }
        cout<<endl;
    }
}