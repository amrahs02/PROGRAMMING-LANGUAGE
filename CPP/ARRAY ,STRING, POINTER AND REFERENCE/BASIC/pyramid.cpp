#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        for(int k=i;k>=0;k--){
            cout<<"*";
        }
        cout<<endl;
    }   
    return 0;
}