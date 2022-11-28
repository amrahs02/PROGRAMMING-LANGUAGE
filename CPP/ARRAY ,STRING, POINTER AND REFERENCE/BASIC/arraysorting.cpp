#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[7]={5,3,2,6,8,7,9};
    for(i=0;i<7;i++){
        cin>>arr[i];
    }
    for(i=0;i<=7;i++){
        if (arr[i]=arr[i-1]){
            return false;
    }
    return true;
    }
}