// //*
// //* *
// //* * *
// //* * * *
// //* * * * *
// #include<iostream>
// using namespace std;

// int main(){
//  int row, column;
//  for(row=1; row<=5; row++){
//     for(column=1; column<=row; column++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }
// }

// //1
// //1 2
// //1 2 3
// //1 2 3 4
// //1 2 3 4
// //1 2 3 4 5

// #include<iostream>
// using namespace std;

// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=1; column<=row; column++){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }

//1
//2 2
//3 3 3
//4 4 4 4 
//5 5 5 5 5
// row=1
// row<=5
// print row no. row-times-
// row++

// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=1; column<=row; column++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }

// //1
// //2 1
// //3 2 1
// //4 3 2 1
// //5 4 3 2 1

// // row=1
// // row<=5
// // print no of items= row no in reverse order or row no , row-1, ....1.
// // row++

// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=row; column>=1; column--){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }


// //a 
// //b b 
// //c c c
// //d d d d
// //e e e e e

// //row=1
// //row<=5
// ///print name row times
// // name=name+1
// // row=row+1
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     char row, column;
// //     for(row='a'; row<='e'; row++){
// //         for(column='a'; column<=row; column++){
// //             cout<<row<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }

// //alternate
// #include<iostream>
// using namespace std;
// int main(){
//     int row,column;
//     for(row=1; row<=5; row++){
//         char ptr = 'a' + row-1;
//         for(column=1; column<=row; column++){
//             cout<<ptr<<" ";
//         }
//         cout<<endl;
//     }
// }


//* * * * *
//* * * *
//* * *
//* *
//*

//row-1 print * 5times
//row-2 4 times
//row3 3 times
//row4 2 times 
//row5 1times

// #include<iostream>
// using namespace std;

// int main(){
//     int row, column,num=5;
//     for(row=1; row<=5; row++){
//         for(column=num;column>=1; column--){
//             cout<<"* ";
//         }
//         num = num-1;
//         cout<<endl;
//     }
// }

// alternate
//row      print
// 1            5   -> 5-(row-1)
// 2            4
// 3            3
// 4            2
// 5            1

// #include<iostream>
// using namespace std;

// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=1;column<=(5-(row-1)); column++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//alternate
// #include<iostream>
// using namespace std;

// int main(){
//     int row, column;
//     for(row=5; row>=1; row--){
//         for(column=1;column<=row; column++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
// row-1 print 1-5--5nos
// row2 print 1-4---4nos
// row3 print 1-3---3nos
// row4 print 1-2---2nos
// row-1 print-1---1no
//print1 to 5-(row-1)
// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=5; row>=1; row--){
//         for(column=1;column<=row; column++){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }


//alternate
// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=1;column<=5-(row-1); column++){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }

//5
//5 4 
//5 4 3 
//5 4 3 2
//5 4 3 2 1

// row    element
// 1         5    --1 item-
// 2         5,4  --2 item-
// 3         5 4 3 --3 item--
// 4         5 4 3 2 --4item--
// 5         5 4 3 2 1  --5 item--
//print 5 to 5-(row-1)

// #include<iostream>
// using namespace std;
// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         for(column=5; column>=5-(row-1); column--){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }

//alternate

// #include<iostream>
// using namespace std;

// int main(){
//     int row, column;
//     for(row=1; row<=5; row++){
//         int num=5;
//         for(column=1; column<=row; column++){
//             cout<<num<<" ";
//             num--;
//         }
//         cout<<endl;
//     }
// }









