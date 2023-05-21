#include <iostream>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main()
{
    int arr[] = {5, 8, 2, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Sebelum pengurutan: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    std::cout << "\nSetelah pengurutan: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
