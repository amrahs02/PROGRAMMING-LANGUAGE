#include<bits/stdc++.h>
using namespace std;
int fun(){
    int num =16;
    return num--;
}

int main(){
    for(fun();fun() ; fun()){
        cout<<" "<< fun();
    }
    return 0;
}