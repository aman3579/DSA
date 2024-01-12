//    * 
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *
//in above we have to take space 4-row times. Dont multiply by two.
//print *-spacebar  
#include<iostream>
using namespace std;
int main(){
int row, col;
for(row=1; row<=4; row++){
    //print space
    for(col=1; col<=4-row; col++){
        cout<<" ";
    }
    //print star
    for(col=1; col<=row; col++){
        cout<<"* ";
    }
    cout<<endl;
}
//printing for reverse side
for(row=4; row>=1; row--){
    //print space
    for(col=1; col<=4-row; col++){
        cout<<" ";
    }
    //print star
    for(col=1; col<=row; col++){
        cout<<"* ";
    }
    cout<<endl;
}
}