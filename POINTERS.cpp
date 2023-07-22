#include <iostream>
using namespace std;
int main()
{
    int a = 33;
    int *b = &a;
    cout << b << "having value : " << *b;

    // POINTER TO POINTERS VARIABLE
    int **c = &b;
    cout << endl
         << c << "  having value : " << **c;
}