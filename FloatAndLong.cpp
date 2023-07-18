#include <iostream>
using namespace std;
int c = 34;
int main()
{
    // double a = 34.5;
    // float b = 34.5f;
    // float c = 34.5F;
    // long double d = 34.5l;
    // long double e = 34.5L;
    // cout << sizeof(a) << endl
    //      << sizeof(b) << endl
    //      << sizeof(c) << endl
    //      << sizeof(d) << endl
    //      << sizeof(e) << endl
    //      << ::c;

    // Reference Variables
    //  float x = 444;
    //  float &y = x;
    //  cout << x << endl;
    //  cout << y;

    // TypeCasting
    float b = 45.78;
    cout << "The value of b is : " << (int)b << endl;
    int c = int(b);
    cout << "The value of b is : " << int(b);
}