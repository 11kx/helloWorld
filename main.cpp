#include <iostream>

void bubuleSort(int arr[],int size)
{
    for(int i = 0;i < size;i++)
    {
        for(int j = 0;j < size - 1 - i;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {100,23,32,14,51};
    bubuleSort(arr,sizeof(arr)/sizeof(arr[0]));
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
}