#include<iostream>
using namespace std;
int main (){
    int i,n,sum=0,last;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0){
        // last=n%10;
        sum=sum+1;
        n=n/10;
    }
    cout<<sum;
}