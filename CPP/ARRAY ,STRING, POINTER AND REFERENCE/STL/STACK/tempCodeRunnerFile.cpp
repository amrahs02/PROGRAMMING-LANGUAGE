#include<bits/stdc++.h>
using namespace std;
void Reverse(string &str){
    int i;
    stack<char> s;
    for(i=0;i<s.size();i++){
        s.push(str[i]);
    }
    for(i=0;i<s.size();i++){  //wrong
        str[i]=s.top();
        s.pop();
    }

int main(){
    string str = "geeks";
    cout<<Reverse(str)<<" " <<endl;
}
