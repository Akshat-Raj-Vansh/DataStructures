#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int item;
    int pos = -1;
    cout << "Enter the element to search" << endl;
    cin >> item;
    for (int i = 0; i < n; i++)
    {
        if (item == arr[i])
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
    {
        cout << "Element found at position " << pos + 1 << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }
}