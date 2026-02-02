#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter N Lines : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char alpha = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << char(alpha+i )<< " ";
            
        }
        cout << "\n";
    }

    return 0;
}