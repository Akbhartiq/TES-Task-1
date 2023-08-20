#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int element = arr[i];
        int j = i - 1;
        while (j >= 0 && element < arr[j])
        {
            int swap = arr[i];
            arr[i] = arr[j];
            arr[j] = swap;
            i=j;
            j--;
        }
    }
    return ;
}
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the content of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Applying the Insertion sort Algorithm to sort the Array
    insertion_sort(arr, size);
    cout << "The sorted array is as follows" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}