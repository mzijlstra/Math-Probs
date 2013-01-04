#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 3;
    int b = 4;
    double c = sqrt(a*a + b*b);

    for (b = 2; b < 1000; b++) {
        for (a = 1; a < b; a++) {
            c = sqrt(a*a + b*b);
            if (fmod(c, 1) == 0 && a + b + c > 999 && a + b + c < 1001) {
                cout << "a: " << a << " b: " << b << " c: " << c << endl;
            }
        }
    }
    return 1;
}
