#include <iostream>

using namespace std;

int main()
{

    int n, fact = 1;

    cout << "Enter Number for Factorial : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "The Factorial of " << n << " is " << fact << "\n";


    return 0;
}