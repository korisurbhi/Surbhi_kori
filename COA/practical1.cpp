#include <iostream>
using namespace std;
int main()
{
    int a = 12; // 00001100 binary
    int b = 25; // 00011001 binary
    int n = 1;  // Shift amount
    cout << "Bitwise Logic Gates with Shifts in Turbo C++" << endl
         << endl;
    cout << "a = " << a << "(binary: 00001100)" << endl;
    cout << "b = " << b << "(binary: 00011001)" << endl
         << endl;
    // AND, OR, NOT
    cout << "AND (&): " << (a & b) << endl;
    cout << "OR (|): " << (a | b) << endl;
    cout << "NOT (~a): " << (~a) << endl;
    // With shifts
    cout << "Shift AND (& >>): " << (a & (b >> n)) << endl;
    cout << "Shift OR (| <<): " << (a | (b << n)) << endl;
    cout << "a << " << n << ": " << (a << n) << endl;
    cout << "a >> " << n << ": " << (a >> n) << endl;
    return 0;// Pause before exit
}
