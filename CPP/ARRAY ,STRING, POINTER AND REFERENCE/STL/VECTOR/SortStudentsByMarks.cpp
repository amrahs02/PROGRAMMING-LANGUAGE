#include<bits/stdc++.h>
using namespace std;

PrintSortByMarks(vector<pair<int,int>>,v){
    for(i=0;i<n;i++){
        v.push_back(arr1[i],arr2[i]);//wrong
    }  
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(i=0;i<n;i++){
        cout<<v[i].second<<" "<<v[i].first;
        cout<<endl;
    }
}
int main(){
    int n,i;
    cin>>n;
    vector<pair<int,int>> v;
    int arr1[n];
    int arr2[n];
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    int res1=PrintSortByMarks(arr1[],arr2[],n);

}