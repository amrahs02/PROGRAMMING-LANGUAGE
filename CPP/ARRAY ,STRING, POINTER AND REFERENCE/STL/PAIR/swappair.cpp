#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p1,p2;
    p1= make_pair(39,20);
    p2= make_pair(30,28);
    cout<<p1.first<<" "<<p1.second<<" ";
     cout<<p2.first<<" "<<p2.second<<endl;
    p1.swap(p2);
    cout<<p1.first<<" "<<p1.second<<" ";
    cout<<p2.first<<" "<<p2.second;
}