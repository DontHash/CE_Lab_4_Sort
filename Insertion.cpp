#include<iostream>
#include<random>
#include<iomanip>


using namespace std;

//function for insertionSort
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

//function for displaying the array
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//driver code
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 999);

    int i;
    int arr[20];
    int n = sizeof((arr)) / (sizeof(int));

    //Generating random numbers to store in an array
    for (int i = 0; i < n; i++)
    {
        arr[i] = dis(gen);
    }

    //before sorting

    cout<<"\nBefore sorting\n";

    for (i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    cout<<"\nAfter Sorting \n";

    insertionSort(arr, n);

    //after sorting
    display(arr, n);
}