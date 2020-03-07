#include <iostream>
using namespace std;

int main(){
    int **arr, n, *size;
    cout<<"Enter the number of the arrays:"<<endl;
    cin>>n;
    arr = new int*[n];
    size = new int[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the size of the array: "<<endl;
        cin>>size[i];
        *(arr+i)=new int [size[i]];
        cout<<"Enter the elements of the array: "<<endl;
        for(int j=0; j<size[i]; j++)
            cin>>*(*(arr+i)+j);
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<size[i];j++){
            cout<<*(*(arr+i)+j)<<", ";
        }
        cout<<endl;
    }
    return 0;
}