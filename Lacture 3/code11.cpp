#include <iostream>

using namespace std;


int main(){

 int n , DivideSum=0;

 cout << "Enter  Iteration Number For The Sum Of a Number  : ";
 cin >> n;

  for(int i=1 ;i<=n ;i++) {
    if(i%3==0){
        DivideSum +=i;
    }
  }

   cout << "Total Sum Of 3 divisible is " << DivideSum << "\n";

    return 0;
}

