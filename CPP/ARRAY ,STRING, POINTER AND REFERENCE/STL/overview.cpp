#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={29,43,53,26,334,4,3,563,4,4};
    sort(arr,arr+10);//sorting a array by sort() function , algorithm header file is necessary 
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
        //searching a number by ry search
        if(ry_search(arr,arr+10,26)){
            cout<<"Present"<<endl;
            break;
        }
        else{
            cout<<"Not Present"<<endl;
            break;
        }
    }
}