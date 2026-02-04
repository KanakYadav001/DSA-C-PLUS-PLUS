#include <iostream>

using namespace std;

bool CheckPrime(int n)
{
  
    for (int i = 2; i < n; i++)
    
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return  true;
        }
    }
    
}

int main()
{

    int n = 5;

    bool Isprime = CheckPrime(n);

    if (Isprime)
    {
        cout << n << " is a Prime Number ";
    }
    else
    {
        cout << n << " is Not a Prime Number ";
    }

    return 0;
}