#include <iostream>
using namespace std;

void swap(int* a, int* b){
    *a= *a+*b;
    *b= *a-*b;
    *a= *a-*b;
}

int Partition(int* A, int beg, int end){
int pivot = A[end];
int mark = beg - 1;
for(int i=beg; i<= end-1; i++){
    if(A[i]< pivot){
        mark++;
        swap(A[i], A[mark]);
    }
}
mark++;
swap(A[mark], A[end]);
return mark;
}
void Display(int* A, int n){
for(int i=0; i<n; i++)
    cout<<A[i]<<" ";
cout<<endl;
}
void Quicksort(int* A, int beg, int end){
if(beg<end){
    int part = Partition(A, beg, end);
    Quicksort(A, beg, part-1);
    Quicksort(A, part+1, end);
}
}

int main(){
int n;
cout<<"Enter the size of the array: ";
cin>>n;
int A[n];
cout<<"Enter the elements of the array: "<<endl;
for( int i=0; i<n; i++){
    cin>>A[i];
}
cout<<"Original Array: "<<endl;
Display(A, n);
Quicksort(A, 0, n);
cout<<"Sorted Array: "<<endl;
Display(A, n);
return 1;
}