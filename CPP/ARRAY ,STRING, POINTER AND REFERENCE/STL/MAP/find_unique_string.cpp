#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int > mpp;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        mpp[str]=i;
    }
    for(auto x:mpp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     map<int ,int  > mpp;
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         mpp[num]=i;
//     }
//     for(auto x:mpp){
//         cout<<x.first<<" "<<x.second<<endl;
//     }
//     return 0;
// }