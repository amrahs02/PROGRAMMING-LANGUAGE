#include<bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int >l;
    l.assign({5,10,15,14,13});
    l.push_front(7);
    l.push_front(9);
    l.push_front(86);
    l.push_front(76);
    l.push_front(6);
    l.push_front(75);
    l.push_front(65);
    l.push_front(45);
    for(auto it=l.begin();it!=l.end();it++){
        cout<<(*it)<<" ";
    }
        return 0;
}