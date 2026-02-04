#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 5;
    int b = 6;
    int sums = sum(a, b);

    cout << sums << "\n";
}