#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==2*n){
        cout<<"perfect number"<<endl;
    }
    else {
        cout<<"Imperfect number";
    }

}