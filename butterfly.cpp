// *             * 
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
#include<iostream>
using namespace std;
int main(){
    int row, col;
    for(row=1; row<=4; row++){
        //print star
        for(col=1; col<=row; col++){
            cout<<"* ";
        }

        //print space
        for(col=1; col<=(4-row)*2; col++){
            cout<<"  ";
        }

        //print star
        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //printing the reverse order
    for(row=3; row>=1; row--){
        //print star
        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        //print star
        for(col=1; col<=(4-row)*2; col++){
            cout<<"  ";
        }
        //print star
        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
