#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the no of elemtns for an array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array is "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Array sorting"<<endl;
    for(i=0;i<n;i++){
        if(arr[i]==1){
            cout<<"y ";
        }
        else{
            arr[i]=arr[i+1];
            cout<<arr[i];3
        }

    }
        return 0;
}