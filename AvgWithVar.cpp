#include <iostream>
#include <chrono>

#define n 100

using namespace std::chrono;
using namespace std;

int main()
{
    auto start = high_resolution_clock::now();
    double sum = 0.0;
    int arr[n];
    int avg[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        avg[i] = sum / (i + 1);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Time taken by Method 1 (n= 100): " << duration.count() <<" nanoseconds"<< endl;
}