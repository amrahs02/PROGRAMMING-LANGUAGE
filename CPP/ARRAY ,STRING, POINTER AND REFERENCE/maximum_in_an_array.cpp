#include<bits/stdc++.h>
using namespace std;
int main (){
    int i;
    int arr[10]={24,53,633,632,63,67,97,444,53,534};
    for(i=0;i<10;i++){
        if(arr[i]>arr[i-1]){//we have to create seperate for the maximum operator
            return i;
        }
        else{
            return 0;
        }
    }
}