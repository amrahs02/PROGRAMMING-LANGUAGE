#include<bits/stdc++.h>
using namespace std;
struct Height
{
   int feet,inches;
   int feet=12*inches; 
} ;
int main (){
    Height n,h1,h2;//incomplete
    cin>>h1.feet>>h1.inches;
    cin>>h2.feet>>h2.inches;
    int sum1=h1.feet+h1.inches;
    int sum2=h2.feet+h2.inches;
    if(sum1>sum2){
        cout<<sum1<<" "<<endl;
    }
    else{
        cout<<sum2;
    }
}