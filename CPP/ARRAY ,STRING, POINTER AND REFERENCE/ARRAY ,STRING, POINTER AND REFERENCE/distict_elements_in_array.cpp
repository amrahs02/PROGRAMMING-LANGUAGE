#include <bits/stdc++.h>
using namespace std;
int main(){



    // Need to modify the program 
    //wrong
    int i,j,l,m;
    cout<<"Enter the no of elements for all the three array"<<endl;
    int arr[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                cin>>arr[i][j];
            }
    }
    cout<<"Your element is "<<endl;
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
     }
     cout<<"Checking for distinct"<<endl;
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]==arr[i+1][j]){
                cout<<"One distict number is "<<arr[i][j]<<endl;
                break;
            }
        }
      }
    return 0;
}