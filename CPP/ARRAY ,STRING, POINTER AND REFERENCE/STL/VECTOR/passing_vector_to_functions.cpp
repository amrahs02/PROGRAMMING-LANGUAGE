#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> &v){   // if we do not use ampersand here we are not able to modify the vector 
    v.push_back(10);        // so make sure to use the ampersand
    v.push_back(20);            // if we use the references then the we not get TLE
}                                 //also good for eficiency reason
int main(){                         //if we not use whole vector will be copied
    vector<int> v{3,4,5,3,3};
    fun(v);
    for(auto x:v){
        cout<<x<<" ";
    }
}

                                                //method 2
                    #include<bits/stdc++.h>
using namespace std;
int fun(const vector<int> &v){   // if we do not use ampersand here we are not able to modify the vector 
    for(auto x:v){
        cout<<x<<endl;
    }       // so make sure to use the ampersand
             // if we use the references then the we not get TLE
}                                 //also good for eficiency reason
int main(){                         //if we not use whole vector will be copied
    vector<int> v{3,4,5,3,3};
    fun(v);
    for(auto x:v){
        cout<<x<<" ";
    }
}