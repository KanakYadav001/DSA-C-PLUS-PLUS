#include <iostream>

using namespace std;

void Reverse(int arr[], int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{

    int size = 5;

    int arr[size] = {2, 5, 7, 9, 6};
    Reverse(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}