#include <iostream>

using namespace std;

int main(){

    int a =10;
    int b = 11 ;

    cout << (a|b) << "\n" ;  // addition but use AND Logic in binary form
    cout << (a&b) << "\n";// addition but use OR Logic in binary form
    cout << (a ^ b) << "\n"; // addition but use XOR Logic in binary form

    cout << (10<<1) << "\n";
    cout << (10<<2) << "\n";

    cout << (8>>1) << "\n";
    cout << (8>>2) << "\n";
    return 0;
}