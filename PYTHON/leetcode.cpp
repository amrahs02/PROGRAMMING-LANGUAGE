#include<bits/stdc++.h>
using namespace std;
int main(){
    int target,n,j,i;
    cin>>target>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int sum1=num[0];
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (num[i]+num[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                break;
            }
        }
    }
}