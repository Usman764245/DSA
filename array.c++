#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}
int main()
{
    int arr[] = {3, 2, 1, 4};
    int n = 4;
    print(arr, n);
    return 0;
}