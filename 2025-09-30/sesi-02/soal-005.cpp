#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    x = y = z = 5; // x = 5, y = 5, z = 5
    x*=y +=z -=1; 
    // z = z-1 = 4
    // y = y + z = 5 + 4 = 9
    // x = x * y = 5 * 9 =  45
}