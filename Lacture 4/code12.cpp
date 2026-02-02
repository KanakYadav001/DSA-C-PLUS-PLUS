#include <iostream>

using namespace std;

int main(){
 

    int n;

    cout << "Enter N Lines Number : ";
    cin >> n;

    char alpha = 'A';
    for(int i=0 ;i<n ;i++){
        for(int j=0 ; j<i+1 ;j++) {
            cout << alpha << " " ;
            alpha+=1;
        }
        cout << "\n";
    }



    return 0 ;
}