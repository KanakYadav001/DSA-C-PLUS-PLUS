#include <iostream>

using namespace std;

int x = 25 ;

int LocalVariable(){
    int a = 24; // local variable
}


int main(){

    
  cout << x << "\n"; //try to access Global Variable
  cout << a << "\n"; //try to access local varibable !!  "error: 'a' was not declared in this scope"



    return 0;
}