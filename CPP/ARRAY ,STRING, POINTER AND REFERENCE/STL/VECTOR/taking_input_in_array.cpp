#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<int >v;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());//sorting the vector
        cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){ //1method
        cout<<(*it)<<" ";
    }
        cout<<endl;
    for(int i=0;i<n;i++){//2method
        cout<<v[i]<<" ";
    }
        cout<<endl;
    for(int &x:v){//3method
        cout<<x<<" ";
    }
}