#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,x;
    cout<<"Enter the no of elements of array and the element that has to be found  "<<endl;
    cin>>n>>x;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"We have find the number ,the number is "<<i<<endl;
            break;
        }
        else {
            cout<<"Your number is not present here"<<endl;
            break;
        }
    }
    return 0;
}