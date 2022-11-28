#include<iostream>
using namespace std;
int main (){
    int i,n1,n2,j;
    cout<<"Enter the first number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;
    for(i=2;i<=(n1/2);i++){
        for(j=2;j<=(n2/2);i++){
            if(n2%j==0){
                if(n1%i==0){
                    cout<<"lcm is"<<i<<endl;
                }
                else{
                    cout<<"Nothing"<<endl;
                }
            }
        }
    }
}