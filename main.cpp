#include <iostream>
#define MAX(a,b) (((a)>(b))?(a):(b))
using namespace std;

int main()
{
    int a=5,b=0;
    int c = MAX(++a,b);
    int d = MAX(++a,b+10);
    cout << "c="<<c<<" d="<<d << endl;
    return 0;
}

