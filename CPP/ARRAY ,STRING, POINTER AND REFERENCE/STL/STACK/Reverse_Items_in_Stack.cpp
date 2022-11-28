#include<bits/stdc++.h>
using namespace std;
string Reverse(string &str){
    int i;
    stack<char> s;
    for(i=0;i<str.length();i++){
        s.push(str[i]);
    }
    for(i=0;i<str.length();i++){ 
        str[i]=s.top();
        s.pop();
    }
    return str;
}

int main(){
    string str = "geeks";
    cout<<Reverse(str)<<" " <<endl;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str= " Sandeep";
//     reverse(str.begin(),str.end());
//     cout<<str;
// }