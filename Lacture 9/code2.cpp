#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector <int> vec ;
 
    cout << "Size of vector is "  << vec.size() << "\n";

    vec.push_back(45);
    vec.push_back(45);
    vec.push_back(65);
    vec.push_back(45);
    vec.pop_back();
    cout <<  vec.front() << "\n";
   cout <<  vec.back() << "\n";
    
 
   cout << vec.at(0) << "\n";
    for(int val : vec){
        cout << val << " " ;
    }
    
  

    return 0;
}