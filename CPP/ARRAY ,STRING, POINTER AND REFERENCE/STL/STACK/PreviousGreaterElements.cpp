#include<bits/stdc++.h>
using namespace std;
  void PreGreEle(int arr[],int n){
      int i,j;
      for(i=0;i<n;i++){
          for(j=i-1;j>=0;j--){
              if(arr[j]>arr[i]){
                  cout<<arr[j]<<" ";
                  break;
              }
          }
          if(j==-1){
              cout<<-1<<" ";
          }
      }
  }
  int main(){
      int n,i;
      cin>>n;
      int arr[n];
      for(i=0;i<n;i++){
          cin>>arr[i];
      }
      PreGreEle(arr,n);
  }



//                                                     //method 2
// #include<bits/stdc++.h>
// using namespace std;
// void PreGreEle(int arr[],int n){
//     int i,j;
//     for(i=n-1;i>0;i--){
//         for(j=i-1;j>0;j--){
//             if(arr[j]>arr[i]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//         }
//         if(){
//             cout<<-1<<" ";
//         }
//     }
// }
// int main(){
//       int n,i;
//       cin>>n;
//       int arr[n];
//       for(i=0;i<n;i++){
//           cin>>arr[i];
//       }
//       PreGreEle(arr,n);
//   }