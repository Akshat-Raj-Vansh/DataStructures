#include <iostream>
using namespace std;

int main(){
    int m,n,p,q;
    cout<<"Enter the dimension of the first matrix (M x N)"<<endl;
    cin>>m;
    cin>>n;
    cout<<"Enter the dimension of the first matrix (P x Q)"<<endl;
    cin>>p;
    cin>>q;
    int A[m][n];
    int B[p][q];
    int C[m][q];
    if(n!=p){
        cout<<"Invalid Dimension! Multiplication not possible!"<<endl;
        exit(0);
    }
    cout<<"Enter the elements of the first matrix"<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>A[i][j];
    cout<<"Enter the elements of the second matrix"<<endl;
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            cin>>B[i][j];
    for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            { 
               C[i][j]=0;
               for(int k=0;k<n;k++)
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    cout<<"First Matrix"<<endl;
    for(int i=0;i<m;i++)
    {    for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
    cout<<endl;
    }
    cout<<"Second Matrix"<<endl;
    for(int i=0;i<n;i++)
    {    for(int j=0;j<q;j++)
            cout<<B[i][j]<<" ";
    cout<<endl;
    }    
    cout<<"Finally third matrix C is"<<endl;
    for(int i=0;i<m;i++)
    {    for(int j=0;j<q;j++)
            cout<<C[i][j]<<" ";
    cout<<endl;
    }
}