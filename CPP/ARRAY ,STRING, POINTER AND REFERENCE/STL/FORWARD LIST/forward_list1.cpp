// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     forward_list<int> l;
//     l.push_front(10);
//     l.push_front(20);
//     l.push_front(30);
//     l.push_front(40);
//     l.pop_front();
//     for(auto i:l){
//         cout<<i<<" "<<endl;
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int> l;
    l.assign({12,43,34,754,3454,84});
    l.assign(4,5);//it assign 5 , 4 times
    l.remove(12);
    // int it =l.insert_after(l.begin(),10);
    //  it =l.insert_after(it,10);
    //  it =l.insert_after(it,{2,3,4});
    //  it =l.erase_after(it);

      // we can also use iterator here to iterate the list
     //  for(auto it=l.begin();it!=l.end();it++){
    //   cout<<(*it)<<" "<<endl;
    for(auto x:l){
        cout<<x<<" "<<endl;
    }


    //we can also assign one forward_list to another 
    forward_list<int> l2;
    l2.assign(l.begin(),l.end());
    for(auto y:l2){
        cout<<y<<" "<<endl;
    }
}