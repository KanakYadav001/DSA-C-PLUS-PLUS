#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector <int> vec ;

    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(35);
    vec.push_back(25);
    vec.push_back(25);
 
    


    cout << "Size of vector : " << vec.size() << "\n";
    cout << "Capacity of vector : " << vec.capacity() << "\n" ; 


    return 0;
}