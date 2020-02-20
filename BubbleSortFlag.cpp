#include <iostream>
using namespace std;

int main()
{
    int n;
    int flag = 0;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Bubble Sorting the data" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
        if (flag == 0)
            break;
    }
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << "\n";
}