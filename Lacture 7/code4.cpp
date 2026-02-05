#include <iostream>

using namespace std;

int main(){

    cout << sizeof(long int)  << "\n";
     cout <<  sizeof(short int) << "\n";
      cout << sizeof(signed int)  << "\n";
       cout << sizeof(unsigned int)  << "\n";
        cout << sizeof(long long int)  << "\n";


        unsigned accoutnumber = -1345678; //not store in negative form [it take 2^31 and 2^31-1 all space to store negative number ]

        cout << accoutnumber <<  " " ;


    return 0;
}