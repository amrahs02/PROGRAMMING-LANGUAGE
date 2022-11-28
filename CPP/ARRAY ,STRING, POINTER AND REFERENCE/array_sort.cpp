#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<10;i++){
    if(arr[i]>arr[i+1]){
        flag=1;
    }
    }
    if(flag){
        cout<<"Not ed"<<endl;
    }
    else{
        cout<<"ed"<<endl;
    }
    return 0;
}