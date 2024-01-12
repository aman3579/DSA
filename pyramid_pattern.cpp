// //        *         
// //      * * *         
// //    * * * * *        
// //  * * * * * * *
// //* * * * * * * * *
// //row=1
// //row<=5
// // print space 5-row times
// //print *- 2*row-1 times
// //print space 5-row times
// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     int num;
//     cout<<"Enterthe value of num: ";
//     cin>>num;
//     for(row=1; row<=num; row++){
//         //print space
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         //print star
//         for(col=1; col<=2*row-1; col++){
//             cout<<"* ";
//         }
//            //print space
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }

// //        1         
// //      1 2 1       
// //    1 2 3 2 1
// //  1 2 3 4 3 2 1
// //1 2 3 4 5 4 3 2 1

// //print space 5-row times
// //print 1 to row number and row-1 to 1.
// //print space row-1 times

// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for(row=1; row<=5; row++){
//         //print space
//         for(col=1; col<=5-row; col++){
//             cout<<"  ";
//         }

//         //print 1 to row number
//         for(col=1; col<=row;col++){
//             cout<<col<<" ";
//         }

//         //print row-number-1 to 1
//         for(col=row-1; col>=1; col--){
//             cout<<col<<" ";
//         }

//         //print space
//         for(col=1; col<=5-row; col++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }


//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *

//print space row-1 times
//print * : (5-row)*2+1 times
//print space row-1 times

// #include<iostream>
// using namespace std;
// int main(){
//     int row, col,num;
//     cout<<"Enter the num: ";
//     cin>>num;
//     for(row=1; row<=num; row++){
//         //printing space
//         for(col=1; col<=row-1; col++){
//             cout<<"  ";
//         }

//         //print star
//         for(col=1; col<=2*(5-row)+1; col++){
//             cout<<"* ";
//         }

//         //print space
//         for(col=1; col<=row-1; col++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }

// //alternate
// //alt we can initialize row with 5.
// //print space row-1 times
// //print 2*row-1 elements
// //print space - row-1 times
// #include<iostream>
// using namespace std;
// int main(){
//     int row, col,num;
//     cout<<"Enter the num: ";
//     cin>>num;
//     for(row=num; row>=1; row--){
//         //printing space
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }

//         //print star
//         for(col=1; col<=2*row-1; col++){
//             cout<<"* ";
//         }

//         //print space
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }


//* * * * * * * *    ----1  
//* * *     * * *    ------2
//* *         * *   -------3
//*             *   -------4
//*             *  ---------5
//* *         * *   --------6
//* * *     * * * -----------7
//* * * * * * * * ------------8

//we will divide above problems into two half
/// 1 to 4 into one group and 5 to 8 into other group.



// initialize row from 4 to 1
//row 4->  (4,4) 8 stars   0 spaces
// row 3-> (3,3) 6 stars   2 spaces
// row-2-> (2,2) 4 stars   4 spaces
//row-1->  (1,1) 2 stars   6 spaces


//print starts - row times   {row starts from 4}
//print space- 4-row times
//print star row times

// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;
//     for(row=4; row>=1; row--){
//         //print star
//         for(col=row; col>=1; col--){
//             cout<<"*";
//         }

//         //print space
//         for(col=1; col<=(4-row)*2; col++){
//             cout<<" ";
//         }
//          //print star
//         for(col=row; col>=1; col--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(row=4;row>=1; row--){
//         //print star
//         for(col=1; col<=5-row;col++){
//             cout<<"*";
//         }
//         //print space
//         for(col=1; col<=(row-1)*2; col++){
//             cout<<" ";
//         }
//          //print star
//         for(col=1; col<=5-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
// }

/////Alternate//////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for(row=1; row<=4; row++){
//         //print star
//         for(col=1; col<=(5-row); col++){
//             cout<<"* ";
//         }
//         //print space
//         for(col=1; col<=(row-1)*2; col++){
//             cout<<"  ";
//         }
//            for(col=1; col<=(5-row); col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     //printing it in reverse order
//     for(row=1; row<=4; row++){
//         //printing the star
//         for(col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         //printing the spaces
//         for(col=1; col<=(4-row)*2; col++){
//             cout<<"  ";
//         }

//         //printing the star
//         for(col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// *             * 
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
//row=1
//row<=4
//print * ---> row times
//print space (4-row)*2 times
// print *-- row times  

//now again new loop
// row=3;
//row>=1
//print * --row times
//print space (4-row)*2 times
//print --*-- row times


