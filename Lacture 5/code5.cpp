#include <iostream>

using namespace std;


int Facto(int n){
 
    int fact = 1 ;

    for(int i =1 ;i<=n ;i++) {
        fact *=i;
    }

    return fact;


    
}



int main(){

int n =5 ;

 int factorial = Facto(n);

 cout << "Factorial of " << n << " is " << factorial << "\n";


    return 0;
}