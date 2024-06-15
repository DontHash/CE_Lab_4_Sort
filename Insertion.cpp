#include <iostream>
#include <random>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, k;
    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 999);

    int n = 20;
    int arr[n];

    // Generating random numbers to store in an array
    for (int i = 0; i < n; i++)
    {
        arr[i] = dis(gen);
    }

    cout << "Input size: " << n << endl;

    //before sorting
    cout<<"Before Sorting:\n";
    display(arr,n);

    insertionSort(arr, n);

    //after sorting array
    cout<<"After Sorting:\n";
    display(arr, n);


    return 0;
}
