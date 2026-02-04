#include <iostream>

using namespace std ;


int multi(int x){
    return x*2;
   
}

int main(){

    int x =5;
    multi(x);

    int fun  = multi(x);


    cout << x << "\n";
    cout << fun << "\n";



    return 0;
}