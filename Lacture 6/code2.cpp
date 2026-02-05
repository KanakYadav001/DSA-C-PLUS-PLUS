#include <iostream>
using namespace std;

int BinaryToDecimal(int num){
 
   int ans =0 , pow =1 ;

   while(num > 0){
       int rem = num%10;
       ans += (rem*pow);

       num = num/10;

       pow*=2;
   }



    return ans ;
}


int main(){


 cout << BinaryToDecimal(101) <<  "\n";


    return 0 ;
}