#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{2,35,3,4,3};
    v.insert(v.begin(),100);
    v.insert(v.begin()+2,7);
    v.insert(v.begin(),2,7);
    vector<int> v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+2);

    v.erase(v.begin());//it erases the first elements from vector v
    v.erase(v.begin(),v.end()-3);//it erases the from first elements to endl-1 elements 
    v.clear();
    int size=v.size();
    cout<<size<<endl;
    if(v.empty()==true){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:v2){
        cout<<x<<" ";
    }
}