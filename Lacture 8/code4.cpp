#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size = 6;
    int arr[size] = {30, 20, 50, 70, 40, 10};

    int smallest = INT_MAX;
    int greater = INT_MIN;

    int Greaterindex = 0;
    int SmallerIndex = 0;

    for (int i = 0; i < size; i++)
    {

        if (greater < arr[i])
        {
            greater = arr[i];
            Greaterindex = i;
        }

        if (smallest > arr[i])
        {
            smallest = arr[i];
            SmallerIndex = i;
        }
    }

    cout << "Smallest Index Number Position is : " << SmallerIndex << "\n";
    cout << "Greatest Index Number Position is : " << Greaterindex << " ";

    return 0;
}