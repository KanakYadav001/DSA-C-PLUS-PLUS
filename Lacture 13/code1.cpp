#include <iostream>

using namespace std;

double mypow(int x ,int n){
    long BinForm = n;
    double ans =1;
    if(n<0){
        x = 1/x;
        BinForm = -BinForm;
    }

    while(BinForm>0){
       if(BinForm % 2==1){
           ans *=x;
       }
       x *=x;
       BinForm /=2;
    }

    return ans;
}

int main(){
    
   double ans  =  mypow(2.0000,2);


   cout << "answer is " << ans << "";
}