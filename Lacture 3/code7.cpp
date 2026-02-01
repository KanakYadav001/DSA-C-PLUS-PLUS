#include <iostream>

using  namespace std;


int main(){

    int n ,sum=0;

    cout << "Enter Itraction  steps : ";
    cin >> n ;


    for(int i=0 ; i<=n ;i++){
     sum +=i;
    }
   
    cout << sum << "\n";



    return 0;
}