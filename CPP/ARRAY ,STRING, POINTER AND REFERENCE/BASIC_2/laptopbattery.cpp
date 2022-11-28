#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res=50;
    cin>>n;
    int event[n];
    for(int i=0;i<n;i++){
        cin>>event[i];
    }
    for(int i=0;i<n;i++){
        if(event[i]<0){
            res+=event[i];
        }
        else{
            res+=event[i];
            if(res>100){
                res=100;
            }
        }
    }
    cout<<res<<endl;
}