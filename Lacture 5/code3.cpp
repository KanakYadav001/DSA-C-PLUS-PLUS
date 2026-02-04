#include <iostream>

using namespace std;


int MinNum(int a,int b){
    if(a<b){
        return a ;
    }
    else{
        return b;
    }
}

int main(){

int a =61;
int b =50;


int MINNum = MinNum(a,b);

cout << MINNum << "\n";



}