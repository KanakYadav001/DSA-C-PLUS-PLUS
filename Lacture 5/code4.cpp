#include <iostream>


using namespace std;


int NSum(int n){
    int sum =0;
    for(int i=1 ;i<=n ;i++){
        sum +=i;
    }

    return sum;
}


int main(){

    int n =5 ;

    int Sum = NSum(n);

    cout <<  " Total Sum is : " << Sum << "\n";


    return 0;
}