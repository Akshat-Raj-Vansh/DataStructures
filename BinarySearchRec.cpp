<<<<<<< HEAD
#include <iostream>
using namespace std;

int search(int* arr, int s, int e, int x){
    int mid = (s+e)/2;
    if(s>e)
    return -1;
    if(arr[mid]==x)
    return mid;
    if(arr[mid]>x)
    return search(arr, s, mid-1, x);
    if(arr[mid]<x)
    return search(arr, mid+1, e, x);
}
int main(){
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the element to be searched"<<endl;
    int x;
    cin>>x;
    if(search(arr, 0, n-1, x)==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at"<<search(arr, 0, n-1, x)+1<<endl;
=======
#include <iostream>
using namespace std;

int search(int* arr, int s, int e, int x){
    int mid = (s+e)/2;
    if(s>e)
    return -1;
    if(arr[mid]==x)
    return mid;
    if(arr[mid]>x)
    return search(arr, s, mid-1, x);
    if(arr[mid]<x)
    return search(arr, mid+1, e, x);
}
int main(){
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the element to be searched"<<endl;
    int x;
    cin>>x;
    if(search(arr, 0, n-1, x)==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at"<<search(arr, 0, n-1, x)+1<<endl;
>>>>>>> c4282030614eb84474bb38b8c1ffedc1e0230e86
}