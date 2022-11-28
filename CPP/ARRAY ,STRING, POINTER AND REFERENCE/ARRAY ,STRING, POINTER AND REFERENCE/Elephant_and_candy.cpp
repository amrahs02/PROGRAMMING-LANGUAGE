#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,i;
        long long c;
        cin>>n>>c;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum<=c){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}
