#include <iostream>

using namespace std;

int main(){
 
    char a ;

    cout << "Enter Your Character :" << "\n";
    cin >> a;
    
    if(a >='a' && a<='z'){
        cout << "This is Lowercase Alphabet Character" << "\n";
    }
    else{
        cout << "This is Uppercase Alphabet Character" << "\n";
    }


    return 0;
}