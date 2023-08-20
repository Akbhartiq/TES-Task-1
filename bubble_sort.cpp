//we are under the main branch
#include <bits/stdc++.h> 


//This Algorithms is of the bubble sort 
using namespace std;
void bubble_sort(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[i])
            {
                int swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap;
            }
        }
    }
    return;
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
    // Applying the bubble sort Algorithm to sort the Array
    bubble_sort(arr, size);
    cout << "The sorted array is as follows" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
