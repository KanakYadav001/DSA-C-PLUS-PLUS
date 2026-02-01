#include <iostream>

using namespace std;


int main(){

 int n ;
 bool isPrime = true;

 cout << "Enter Your Number To Check Number Is Prime Or Not" << "\n";
cin >> n ;

 for(int i=2 ;i*i<=n ;i++) {
    if(n%i==0){
        isPrime = false ;
        break;
    }
 }
 if(isPrime == true){
    cout << "This Is Prime Number " ;
 }
 else {
    cout << "This Is Not a Prime Number ";
 }

    return 0;
}