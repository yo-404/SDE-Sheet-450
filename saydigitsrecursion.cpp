#include <iostream>
#include <string>
using namespace std;

void saynum(int n, string arr[])
{
    // base case
    if (n == 0)
        return;

    // processing

    int digit = n % 10;
    n = n / 10;

    saynum(n, arr);

    cout << arr[digit] << "  ";
}

int main()
{
    int n;
    cin >> n;
    string arr[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    saynum(n, arr);
    return 0;
}