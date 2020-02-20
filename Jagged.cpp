<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number of elements"<<endl;
    int n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int g;
    cout<<"Enter the number of groups"<<endl;
    cin>>g;
    int* ptr[g];
    int size[g];
    int start;
    for(int i=0;i<g;i++){
        cout<<"Enter the starting point of group "<<i+1<<endl;
        cin>>start;
        ptr[i] = arr[start];
        cin>>size[i];
    }
    return 0;
}
=======
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number of elements"<<endl;
    int n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int g;
    cout<<"Enter the number of groups"<<endl;
    cin>>g;
    int* ptr[g];
    int size[g];
    int start;
    for(int i=0;i<g;i++){
        cout<<"Enter the starting point of group "<<i+1<<endl;
        cin>>start;
        ptr[i] = arr[start];
        cin>>size[i];
    }
    return 0;
}
>>>>>>> c4282030614eb84474bb38b8c1ffedc1e0230e86
