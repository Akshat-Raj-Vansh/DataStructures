#include <iostream>
using namespace std;

int findElement(int* arr, int n, int item){
    int pos= -1;
    for(int i=0; i<n;i++){
        if(arr[i]==item)
        {
            pos= i;
            break;
        }
    }
    return pos;
}
int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element to be deleted" << endl;
    int item;
    cin >> item;
    cout << "Do you want to delete\n1.The first occurence\n2.All occurences" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        int position = findElement(arr, n, item);
        if(position!=-1){
        for (int i = position; i < n-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n=n-1;
        }
    }
    else if (choice == 2)
    {
        while(findElement(arr, n ,item)!=-1){
        int position = findElement(arr, n, item);
        if(position!=-1){
        for (int i = position; i < n-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n=n-1;
        }
    }
    }

    cout << "Final Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}