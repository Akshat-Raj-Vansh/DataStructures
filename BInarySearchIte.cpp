<<<<<<< HEAD
#include <iostream>
using namespace std;

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
    int start=0;
    int end=n-1;
    int pos=-1;
    int mid = (start+end)/2;
    while(start<=end){
    if(arr[mid]==x)
    {
        pos= mid;
        break;
    }
    if(arr[mid]<x)
        start=mid+1;
    else if(arr[mid]>x)
        end=mid-1;
    mid = (start+end)/2;
    }
    if(pos==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at "<<pos+1<<endl;
=======
#include <iostream>
using namespace std;

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
    int start=0;
    int end=n-1;
    int pos=-1;
    int mid = (start+end)/2;
    while(start<=end){
    if(arr[mid]==x)
    {
        pos= mid;
        break;
    }
    if(arr[mid]<x)
        start=mid+1;
    else if(arr[mid]>x)
        end=mid-1;
    mid = (start+end)/2;
    }
    if(pos==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at "<<pos+1<<endl;
>>>>>>> c4282030614eb84474bb38b8c1ffedc1e0230e86
}