#include <iostream>

using namespace std;

int main(){

    int num , line ;

    cout << "Enter How Much Line Ypou Want : ";
    cin >> line ;

    cout << "Enter How Many Starts You You Want To Print  : " ;
    cin >> num ;


    for(int i=1 ; i<=line ;i++){
        for(int j=1 ; j<=num ;j++){
            cout << "*";
        }
        cout << "\n";
    }

    

    return 0 ;
}



