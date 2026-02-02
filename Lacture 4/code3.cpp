#include <iostream>

using namespace std;


int main(){
 
    int n;
    cout << "Enter N Lines : ";
    cin >> n ;


    for(int i=0 ;i<n ;i++) {
        char word = 'A' ;

        for(int j=0 ;j<n;j++){
           cout << word << " " ;
            word +=1;
        }

        cout << "\n";
    }

 


    return 0;
}