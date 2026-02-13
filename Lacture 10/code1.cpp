#include <iostream>


using namespace std;

int main(){

   int size = 5 ;
    int arr[size] = {1,2,3,4,5};

    for(int str =0 ; str<size ;str++){
        for(int end=str ; end < size ;end++){
                for(int i=str ; i<=end;i++){
                    cout << arr[i];
                }
                cout << " ";
        }
        cout << "\n";
    }


    return 0;
}