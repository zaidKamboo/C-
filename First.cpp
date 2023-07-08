#include <iostream>
using namespace std;
class New
{
public:
    string msg;
    void print()
    {
        cout << msg;
    }
};
int main()
{
    New n;
    n.msg = "Hello World!";
    n.print();
    return 0;
}