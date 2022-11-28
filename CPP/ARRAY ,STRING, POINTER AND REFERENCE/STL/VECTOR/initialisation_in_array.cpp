// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(9);
//         for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
//     }


    //method 2


//     #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={2,35,6,7,5,4};
//     for(auto i:v){
//         cout<<i<<endl;
//     }
//     for(auto &i:v){ //if we want to modify the program then we have to use the ampersand operator before i
//         cout<<i<<endl;
//     }
//     }
                                        //method 3
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={2,35,6,7,5,4};
//     for(auto i:v){
//         cout<<i<<endl;
//     }
//     for(auto &i:v){ //if we want to modify the program then we have to use the ampersand operator before i
//         i=9;
//     }
//     for(auto i:v){
//         cout<<i<<endl;
//     }
//     }
                                        //method 4




// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){ 
//     int it;  //wrong
//     int n=10,k=30;
//     vector<int> v(n,k);                             //it initialise the vector of size 10 with value 30 on everywhere
//     for(auto it=v.begin() ; it!=v.end() ; it++){   //if we do not write auto the we have to write ( vector<int>::iterator  )
//                                                   //use auto to avoid lenghty code
//         cout<<(*it)<<endl;
//     }
//     return 0;
// }


                                        //  method 5
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int arr[]={34,6,45,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);  
    vector<int> v(arr,arr+n);             //arr+n==0
    for(auto it=v.begin();it!=v.end();it++){
    //for(auto it=v.rbegin();it!=v.rend();it++){   print reverse 
        cout<<(*it)<<endl;
    }

    }