#include<bits/stdc++.h>
using namespace std;
    int prime (int n1 ,int n2){
        int i;
        for(i=2;i<n2-1;i++){
            if(n2%i==0){
                cout<<"non prime"<<endl;
            }
            else {
                cout<<"Prime"<<endl;
            }
        }
    }//This is wrong code 
int main(){
    int i,n1,n2,result;
    cout<<"Enter both the numbers"<<endl;
    cin >>n1>>n2;
    //result = prime( int n2);
    cout<<result;
}
 