#include <iostream>


using namespace std;




int main(){

   int num = 123 ;
 
   string reverse = "";


   while(num >0){
    int lastDigit = num%10;
    num = num/10;
    reverse += (lastDigit + '0') ;
      
   }

   cout << reverse << "\n";


    return 0;
}