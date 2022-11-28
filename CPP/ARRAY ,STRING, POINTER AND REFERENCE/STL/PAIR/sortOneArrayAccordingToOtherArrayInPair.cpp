#include<bits/stdc++.h>
using namespace std;
    void pair(int arr[], char s[] , int n){
        pair<int,int >p1;
        for(int i=0;i<n;i++){
            p1[i].first=arr[i];//can also be used in one line p[i]= {a[i],b[i]}
            p1[i].second=s[i];
        }
        (p1,p1+n);//it sort the array
        for(int i = 0; i < n; i++){
            s[i] = p1[i].second;
        }
        for(int i=0;i<n;i++){
            cout<<"("<<p1[i].first<<" "<<p1[i].second<<")"<<endl;
        }
    }


int main(){
   int arr[] = {2, 1, 5, 4, 8, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    }
    char s={'d','s','a','t','u','y','h','o'};

    pair(arr,s,n        );
    return 0;
}
// Program to implement  an array
// according to another array

// #include<bits/stdc++.h>
// using namespace std;

// // Function to  the elements of array b[]
// // according to the elements of array a[]
// void pair(int a[], char b[], int n)
// {   
//     // Create an array of pairs
//     pair<int, int> arr_p[n];
    
//     // Fill the array of pairs such that 
//     // first element of pair is the elements of a[]
//     // second element of pair is the corresponding
//     // element of array b[]
//     for(int i = 0; i < n; i++)
//     {
//         arr_p[i].first = a[i];
//         arr_p[i].second = b[i];
//     }
    
//     //  the array of pairs
//     // By default, the  function s a 
//     // container by first element
//     (arr_p, arr_p + n);
    
//     for(int i = 0; i < n; i++)
//     {
//         b[i] = arr_p[i].second;
//     }
    
//     // Print the elements of pairs
//     for(int i = 0; i < n; i++)
//     {
//         cout<<"("<<arr_p[i].first <<", "<<b[i]<<") ";
//     }

// }

// // Driver Code
// int main()
// {   
//     // Inputs
//     int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
//     int n = sizeof(a) / sizeof(a[0]);
//     char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    
//     pair(a, b, n);
    
//     return 0;
// }