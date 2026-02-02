#include <iostream>
using namespace std;

int main() {

 int n;

 cout << "Enter N Line Number  : ";
 cin >> n;

 for(int i=0 ; i<n;i++){
   
    for(int j=i ; j>=0 ; j--){

        cout << (char)('A'+j) << " ";
        

    }

    cout << "\n";
 }


    return 0 ;
}