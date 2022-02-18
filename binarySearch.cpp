#include <bits/stdc++.h>
using namespace std;
int bsearch(int arr[], int l, int r, int key);
int bsearch(int arr[], int r, int l, int key)
{
    int mid = r + (l - r) / 2;

    if (l < r)
    {
        return -1;
    }
    if (arr[mid] == key)
        return mid;
    if (arr[mid] < key)
        return bsearch(arr, mid + 1, l, key);
    if (arr[mid] > key)
        return bsearch(arr, r, mid - 1, key);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    // cout << "The size of array is :" << size << endl;
    // bsearch(a, size);
    cout << "The arrray is" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    int key;
    cout << "Enter the Key to be found" << endl;
    cin >> key;
    int index = bsearch(a, 0, size - 1, key);
    cout << "The index of Key is :" << index << endl;
    return 0;
}