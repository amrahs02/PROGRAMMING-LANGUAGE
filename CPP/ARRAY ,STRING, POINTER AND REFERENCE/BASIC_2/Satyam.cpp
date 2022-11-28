#include<bits/stdc++.h>
using namespace std;
    void uniquelement(int arr[],int n){
        for(int i=0;i<n;i++){
            if (arr[i]==arr[i+1]){
                continue;
            }else{
                cout<<arr[i]<<" ";
            }
        }
    }
    int main(){
        int n;
        cout<<"Enter the size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the element of array"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Unique elements of the array are :"<<" ";
        uniquelement(arr,n);
        return 0;
    }