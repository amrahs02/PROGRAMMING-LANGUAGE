#include<iostream>
using namespace std;
int main (){
    //Right Program
    int i,n1,n2;
    cout<<"Enter the number to check weather num is  or not"<<endl;
    cin>>n1>>n2;
    for(i=2;i<n1-1;i++){
        if(n1%i==0){
            cout<<"Non "<<endl;
            break;
        }
        else {
            cout<<"Prime"<<endl;
            break;
        }
            n1++;
            n1<n2;
    }

}