#include<iostream>
using namespace std;
int main(){
    pair<int ,string> p1(10,"Sandeep");
    cout<<p1.first<<endl<<p1.second<<endl;
    pair<int, int> p2(13,30);  //if we not initialise the pair then we get the value as zero zero
    cout<<p2.first<<endl<<p2.second<<endl;
}
  //we can write the same code as the given below

/* #include<iostream>
using namespace std;
int main(){
    pair<int ,string>; 
    p1={10,"Sandeep"};   // can also be written as make_pair(10,sandeep);
    cout<<p1.first<<endl<<p1.second<<endl;
    pair<int, int> ;
    p2=(13,30);  //if we not initialise the pair then we get the value as zero zero
    cout<<p2.first<<endl<<p2.second<<endl;
}