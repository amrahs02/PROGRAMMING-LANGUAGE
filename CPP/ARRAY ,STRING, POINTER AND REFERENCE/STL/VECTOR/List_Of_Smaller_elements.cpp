#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,k,n=5;
    cin>>k;
    int arr[5];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    for(i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    for(i=0;i<n;i++){     //do not work with for(auto i:v)
        if(v[i]<k){
            cout<<v[i]<<" ";
        }
    }
}