#include <iostream>

using namespace std;



void Fabonachi(int n){
  
    int first = 0;
    int second = 1;
    cout << first << " " ;
     cout << second << " " ;


     for(int i =3 ; i<=n ;i++){
         int next  = first + second;
         cout << next << " ";
         first =second;
         second =next ;

     }
   


}

int main(){

    int n = 10 ;

    Fabonachi(n);

    return 0 ;
}