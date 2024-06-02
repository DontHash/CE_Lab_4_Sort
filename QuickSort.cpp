#include <iostream>
#include <iomanip>
#include <random>

int partition(int array[], int low, int high)
{
    int pivotElement = array[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (array[j] > pivotElement)
        {
            j = j - 1;
        }
        while (array[i] < pivotElement)
        {
            i = i + 1;
        }
        if (i < j)
        {
            std::swap(array[i], array[j]);
        }
    }

    return j;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(array, low, high);
        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 999);

    int i;
    int arr[20];
    int n = sizeof((arr)) / (sizeof(int));

    //Array Generation for testing
    for (int i = 0; i < n; i++)
    {
        arr[i] = dis(gen);
    }

    //Array checking before sorting
    for (i = 0; i < n; i++)
    {
        std::cout << " " << arr[i];
    }

    std::cout << "\nAfter Sorting \n";

    quickSort(arr,0,n);

    //Checking after sorting function
    for (i = 0; i < n; i++)
    {
        std::cout << " " << arr[i];
    }
}