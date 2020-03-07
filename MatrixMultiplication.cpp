#include <iostream>
using namespace std;

void getMatrix(int m, int n, int **arr){
    for(int i=0; i<m;i++)
        for(int j=0; j<n;j++)
            cin>>*(*(arr+i)+j);
}
int main(){
    int m,n,p,q;
    cout<<"Enter the dimension of the first matrix (M x N)"<<endl;
    cin>>m;
    cin>>n;
    cout<<"Enter the dimension of the first matrix (P x Q)"<<endl;
    cin>>p;
    cin>>q;
    int** A;
    int** B;
    for(int i=0; i<m;i++)
    {
    *(A+i)=new int[n];
    }
    for(int i=0; i<p;i++)
    {
    *(B+i)=new int[q];
    }
    int C[m][q];
    if(n!=p){
        cout<<"Invalid Dimension! Multiplication not possible!"<<endl;
        exit(0);
    }
    cout<<"Enter the elements of the first matrix"<<endl;
    getMatrix(m, n, A);
    cout<<"Enter the elements of the second matrix"<<endl;
    getMatrix(p, q, B);
    cout<<"Finally third matrix"<<endl;
    
}