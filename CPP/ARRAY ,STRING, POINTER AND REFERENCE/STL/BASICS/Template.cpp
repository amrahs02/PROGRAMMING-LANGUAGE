#include<iostream>
using namespace std;
template<typename T>
T mymax( Tx, Ty){
    return (x>y)?x:y;
}
int main(){
    cout<mymax(3,5)<<endl;
    cout<<mymax('s','t')<<endl;
    return 0;

}