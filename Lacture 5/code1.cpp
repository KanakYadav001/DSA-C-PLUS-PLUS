#include <iostream>


using namespace std ;


 int NumFunction(){
        cout << "Hello  Functions";
        return 3;
    }

int main(){

   int number = NumFunction();

   cout << "Function value is " << number << "\n";
 

    return 0 ;
}