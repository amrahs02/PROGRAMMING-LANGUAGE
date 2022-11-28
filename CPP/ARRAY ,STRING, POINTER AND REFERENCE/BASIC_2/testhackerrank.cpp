#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n;
    cin>>n;
    int l=v.size();
    for(int i=0;i<l;i++){
        v.push_back(i);
    }
    for(int i=0;i<l;i++){
        cout<<v[i]<<endl;
    }
}
