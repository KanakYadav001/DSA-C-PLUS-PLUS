#include <iostream>


using namespace std;


int AllNumSum(int n){
   
    int sum = 0;
    while(n>0){
        int OneNum = n%10;
        sum += OneNum;
        n = n/10;

    }

    return sum ;

}

int main(){
 

    int n =253;


    int AllSum = AllNumSum(n);

    cout << AllSum << "\n";





    return 0;
}