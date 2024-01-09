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


//        A
//      A B
//    A B C 
//  A B C D
//A B C D
//row=1
// row<=5
// print space- num-row times
// print A to .... till row no.
//row++

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
//         for(int col=1; col<=row; col++){
//             char ptr = 'A' + col -1;
//             cout<<ptr<<" ";
//         }
//         cout<<endl;
//     }
// }

//alternate
 #include<iostream>
using namespace std;
int main(){
    int row, col, num;
    cout<<"Enter the number of rows: ";
    cin>>num;

    for(row=1; row<=num; row++){
        //print space
        for(col=1; col<=num-row; col++){
            cout<<"  ";
        }
        //print alphabet
        for(char colm='A'; colm<='A' + row-1; colm++){
            // char ptr = 'A' + col -1;
            cout<<colm<<" ";
        }
        cout<<endl;
    }
}