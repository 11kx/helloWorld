#include <iostream>
#include <algorithm>

int partition(int arr[], int low, int high)
{
    int mid_value = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < mid_value)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid_index = partition(arr, low, high);

    quickSort(arr, low, mid_index - 1);
    quickSort(arr, mid_index + 1, high);
}

int main()
{
    int arr[10] = {100, 23, 32, 14, 51};
    quickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
    for (auto i : arr)
    {
        std::cout << i << " ";
    }
}