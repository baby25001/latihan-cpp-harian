#include <iostream>
using namespace std;

int main()
{
    int varA = 10;
    int varB = 20;

    int *p1; // Pointer 1
    int *p2; // Pointer 2
    int *p3; // Pointer 3

    p1 = &varA; 

    cout << varA << " " << &varA << endl;
    cout << p1 << " " << *p1 << " " << &p1 << endl;

    *p1 = 15;

    cout << varA << " " << *p1 << endl;

    p2 = p1; // p2 disalin nilainya dari p1. Ke mana p2 menunjuk?

    cout << p1 << " " << *p1 << endl;
    cout << p2 << " " << *p2 << endl;
    cout << &p1 << " " << &p2 << endl;

    *p2 = 25;

    cout << varA << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;

    p1 = &varB; // p1 dipindahkan agar menunjuk ke varB. Bagaimana dengan p2?

    cout << p1 << "  " << *p1 << endl;
    cout << p2 << "  " << *p2 << endl;
    cout << varA << "  " << varB << endl;

    p3 = &varB; // p3 juga menunjuk ke varB

    cout << p3 << " " << & (*p3) << endl;
    cout << &varB << endl;

    return 0;
}