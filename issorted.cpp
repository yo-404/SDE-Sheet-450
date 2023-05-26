#include <iostream>
using namespace std;

// value passes as pointer in an function and hence using arr+1 will make the function to point the array to the next array location 
bool issorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool ans = issorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = issorted(arr, n);
    if (ans)
    {
        cout << "array is sorted ";
    }
    else
    {
        cout << "array isnt sorted brow";
    }
}
