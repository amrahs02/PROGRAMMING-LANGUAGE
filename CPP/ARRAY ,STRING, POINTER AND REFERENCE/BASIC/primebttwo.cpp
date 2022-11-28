#include<iostream>
using namespace std;
int main (){
//     //Right Program
//     int i,n;
//     cout<<"Enter the number to check weather num is prime or not"<<endl;
//     cin>>n;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Non Prime"<<endl;
//             break;
//         }
//         else {
//             cout<<"Prime"<<endl;
//             break;
//         }
//     }
// }




int i,n1,n2;
cout<<"Enter the number"<<endl;
cin>>n1;
cout<<"Enter the numbers"<<endl;
cin>>n2;
for(i=(n1+1);i<n2;i++){
    if(n2%i==0){
        cout<<"Non prime";
    }
    // wrong code
    else {
        cout<<"Prime no's "<<n1+1<<endl;
    }
}
}