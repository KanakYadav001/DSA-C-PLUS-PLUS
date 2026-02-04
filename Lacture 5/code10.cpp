#include <iostream>


using namespace std;


void PrintPrime(int n){
  
    if(n==0){
        return ;
    }

    for(int i=2 ; i<=n ;i++){
        bool isPrime = true;
        for(int j=2 ; j*j<=i ;j++){
            if(i%j==0){
                isPrime = false;
            }
        }

        if(isPrime){
            cout << i << "\n";
        }
    }
}


int main(){
 
    int n =10;

    PrintPrime(n);



    return 0;
}