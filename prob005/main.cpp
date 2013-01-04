#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int i = 2520;
    while (i < INT_MAX) {
        if (i % 20 == 0 &&
            i % 19 == 0 &&
            i % 18 == 0 &&
            i % 17 == 0 &&
            i % 16 == 0 &&
            i % 15 == 0 &&
            i % 14 == 0 &&
            i % 13 == 0 &&
            i % 12 == 0 &&
            i % 11 == 0) {
                break;
            }
        i += 20;
    }

    cout << "Smallest: "  << i << endl;
    return 0;
}
