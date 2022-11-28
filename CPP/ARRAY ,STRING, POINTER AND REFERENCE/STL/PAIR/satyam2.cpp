#include<iostream>
using namespace std;

int peakelement(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        int mid = start + (end-start)/2;
    }
    return start;
}

int main()
{

    int even[4] = {0,2,1,0};
    cout<<"peak element is at index "<<peakelement(even, 4)<<endl;

    return 0;
}