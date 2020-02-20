#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be inserted" << endl;
    int item;
    cin >> item;
    cout << "Where do you want to insert the element?\n1.At the start\n2.At the middle\n3.At the end" << endl;
    int pos;
    cin >> pos;
    if (pos == 1)
    {
        for (int i = n; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = item;
    }
    else if (pos == 2)
    {
        for (int i = n; i > n / 2; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[n / 2] = item;
    }
    else
        arr[n] = item;
    cout << "Element inserted" << endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " " << endl;
    }
}