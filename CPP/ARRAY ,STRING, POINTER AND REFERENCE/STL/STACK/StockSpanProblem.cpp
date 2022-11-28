#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=1,i=0,x=1;
    int arr[10]={15,13,12,14,16,8,6,4,10,30};
    for(i=0;i<10;i++){
        if(arr[i-x]>arr[i]){
            cout<<count<<endl;
            i++;
        }
        else{
            x++;
        }
        break;
    }

}