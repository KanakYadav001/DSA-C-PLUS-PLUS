#include <iostream>

using namespace std ;

int NcR(int n ,int r){
    
    int Nfacto =1;
    int Rfacto =1;
    int NMinusRFacto =1;

    for(int i=1 ;i<=n ; i++){
         Nfacto *= i;
    }

    cout << Nfacto << '\n';


    for(int j=1 ;j<=r ; j++){
         Rfacto *= j;
    }

    

    int NMinusR = n-r;

    
    
    for(int k=1 ;k<=NMinusR ; k++){
         NMinusRFacto *= k;
    }


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