#include <iostream>


using namespace std;

int main(){


    int n = 4 ;



    int MinusN= n-1;

          int result = (n & MinusN) ;                        
   
          if(result){
            cout << "Number Not Power of 2";
          }
          else {
            cout << "Number Is Power is 2";
          }


    return 0;
}