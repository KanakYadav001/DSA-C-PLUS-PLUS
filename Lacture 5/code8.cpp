#include <iostream>

using namespace std ;




int facto(int n){
    
    int facto = 1;

    for(int i=1;i<=n ;i++){
        facto *= i;
    }

    return facto;
    
   
}

int NcR(int n ,int r){
    
    int Nfacto =facto(n);
    int Rfacto =facto(r);
 
    int NMinusRFacto =facto(n-r);

    int nCr = Nfacto / (Rfacto*NMinusRFacto);

    return nCr; 
}

int main(){

    int n = 8 ;
    int r = 2 ;

    int NCR = NcR(n,r);

    cout << NCR << "\n";


    return 0;
}