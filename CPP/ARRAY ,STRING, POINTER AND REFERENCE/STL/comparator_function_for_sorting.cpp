//                                 simple method to swap the array /vector

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i]>v[j]){
//                 swap(v[i],v[j]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }
                               // comparator funtion method to swap the array /vector

// #include<bits/stdc++.h>
// using namespace std;

// bool should_i_swap(int a,int b){
//     if(a>b) return true;
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(should_i_swap(v[i],v[j])){  //passed comparator funtion 
//                 swap(v[i],v[j]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(pair<int,int>a,pair<int,int>b){ 
    if(a.first!=a.second){
        if(a.first > b.first) return true;
            return false;
    } 
    else{
        if(a.second < b.second) return true;
            return false;
    }

    }
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap(v[i],v[j])){  //passed comparator funtion 
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}