#include <iostream>
using namespace std;

int bubble_sort(int arr[], int n) 
{
    int temp;
    bool swapped = false;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
    }
    if (swapped) return 0;
    else return 1;
}

void print_sort(int n, int arr[]) 
{
    cout << "After sorting:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << endl;
    }
}

int main() 
{
    int n;
    int arr[30];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int j = bubble_sort(arr, n);

    if (j == 0) 
    {
        print_sort(n, arr);
    } else if (j == 1) 
    {
        cout << "Array is already sorted\n";
    }

    return 0;
}
