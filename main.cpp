#include "tvector.h"

using namespace std;

int main()
{
    tVector a(3), b(3), temp;
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    b[0] = 4;
    b[1] = 25;
    b[2] = 6;

    print(b - a);
    return 0;
}
