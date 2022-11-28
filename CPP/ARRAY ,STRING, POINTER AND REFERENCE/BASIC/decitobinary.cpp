#include<iostream>
using namespace std;
int main (){
    int i,n,rem=0;
    //wrong program
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=2;n<0;i){
        rem=n%i;
        n=n/10;
    }
    cout<<rem<<endl;

}