#include<bits/stdc++.h>
using namespace std;
//need to modify the program 
int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }//wrong
    int min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i-1];
        }
        cout<<arr[i]<<endl;
    }
}