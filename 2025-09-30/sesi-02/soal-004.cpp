#include <iostream>
using  namespace std;


int main (){
 int m=5;
 int n=2; 

 int m1 = m*= n++;

 m=5;
 n=2;
 int m2 = m+= --n;

 cout << m1 << " " << m2;
}
