//if element is not found then it gives the result as -1
#include<iostream>
using namespace std;

int ch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
}
int main (){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res= ch(arr ,n,k);


    
    cout<<res<<endl;

}