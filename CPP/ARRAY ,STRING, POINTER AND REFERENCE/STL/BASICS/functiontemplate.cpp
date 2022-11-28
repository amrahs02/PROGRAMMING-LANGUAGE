#include<iostream>
using namespace std;
#fr for(i=0;i<n;i++);
template<typename T>//template<typename T, int limit>
T arrMax(T arr,int n){
    T res=0,;
    fr{
    if(arr[i]>res){
        res=arr[i];
    }
    }
    return res;
}
int main(){
    int i;
    int arr1[4]= {2,3,5,6};
    cout<<arrMax<int>(arr1,4); //also pass constant value as the parameter like <int,100> (arr1,4) 
                                //if <int,x> it through error  , 
                                //but to avoid error initialise const x=100 
    int arr2[5]={3.2,4.8,6.6,7.4,4.4};
    cout<<arrMax<float>(arr2,5);
}