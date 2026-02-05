#include <iostream>


using namespace std;


int BinaryConverter(int n){
  int ans = 0 ;
  int pow =1 ;

  while(n>0){
    int remender = n%2;
    n = n/2;

    ans += (remender*pow);
    pow *=10;

  }


  return ans ;


}

int main(){

    int DecNum = 5 ;

    int BinaryForm  = BinaryConverter(DecNum);


    cout << DecNum << " in Binary Form is : " << BinaryForm << "\n";


    return 0 ;
}