#include <iostream>


using namespace std;


int main(){
 

    int n ,oddSum=0 ;

    cout << "Enter You Iteration Steps : " << "\n";
    cin >> n;

    for(int i=0 ; i<=n ;i++){
        if(i%2 !=0){
            oddSum +=i ;
        }        
    }
    cout << "\n";
    cout << "Your Total Odd Sum is : " << oddSum << "\n";
    


    int num , j =0 , OddSum=0 ;
    cout << "Enter You Iteration Steps : " << "\n";
    cin >> num;

    while(j<=num){
        if(j%2!=0){
    OddSum +=j ;
        }
        j++;
    }
cout << "Total Odd sum is " <<  OddSum << "\n";




    return 0 ;
}