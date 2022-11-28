#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{3,45,3,7,4,};
    v.resize(2);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.resize(8);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.resize(10,9);
    for(auto i:v){
        cout<<i<<" ";
    }

}