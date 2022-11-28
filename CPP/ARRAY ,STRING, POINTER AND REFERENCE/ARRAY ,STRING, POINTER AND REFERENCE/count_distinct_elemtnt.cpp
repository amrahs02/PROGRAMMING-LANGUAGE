#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,count=0;
    int arr[10]={1,4,63,4,4,8,3,2,6,6};
    for(i=0;i<10;i++){
        if(arr[i]==arr[i-1]){
            count=count;
        }
        else count+=1;
    }
    cout<<count;
}