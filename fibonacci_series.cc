//printing the series
// #include<iostream>
// using namespace std;
// int main(){
//     int last=0, prev=1, curr, num,index;
//    cout<<"Enter the num of terms: ";
//     cin>>num;
//     for(int i=0; i<num; i++){
//                     cout<<last<<endl;
//         curr = last+prev;
//         last = prev;
//         prev = curr;
//     }

//     return 0;
//     }


//printing the index
#include<iostream>
using namespace std;
int main(){
    int last=0, prev=1, curr, num,index;
   cout<<"Enter the index: ";
    cin>>num;
    for(int i=0; i<num-1; i++){
        curr = last+prev;
        last = prev;
        prev = curr;
    }
    cout<<last<<endl;
   return 0;
    }