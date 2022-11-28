#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp[10];
    int i,j,sum1=0,sum2=0;
    int arr[2][3]={{3,2,1},{1,5,3}};
    for(i=0;i<2;i++){
        sum1=0;
        for(j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
            sum1+=arr[i][j];
            temp[i]=sum1;
        }///////wrong
    }
    cout<<endl;
    for(int i=0;i<2;i++){
        cout<<temp[i]<<endl;
    }
return 0;
}