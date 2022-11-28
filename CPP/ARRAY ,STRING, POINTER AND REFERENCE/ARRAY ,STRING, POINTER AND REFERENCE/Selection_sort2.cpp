#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;//wrong program
    }
    cout<<"Sorted array is "<<endl;
    for(i=0;i<n-1;i++){
        for(j=1;j<n+1;j++){
            if(arr[j]<arr[i]){
                arr[i]=arr[j];
            }
            else if (arr[j]>arr[i]){
                continue;
            }
            else{
                arr[i]=arr[j];
            }
        }
    }
    cout<<"Your sorted array is "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}