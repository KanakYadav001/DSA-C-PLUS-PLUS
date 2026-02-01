#include <iostream>

using namespace std;

int main(){
 
    int a ;

    cout << "Enter A : " ;
    cin >> a;

    if(a>90){
       cout << "O" << "\n";
    }
    else if (a>70 && a<=90){
        cout << "A+" << "\n";
    }
    else if(a>50 && a<=70){
        cout << "B" << "\n";
    }
    else {
        cout << "C" << "\n";
    }
 

    return 0;  
}