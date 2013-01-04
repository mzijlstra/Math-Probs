#include <iostream>

using namespace std;

int main()
{
/*
    int i = 0;
    unsigned long sum1 = 0;
    unsigned long sum2 = 0;

    for (i=3; i < 1000; i+=3) {
        sum1 += i;
    }
    cout << "multiples of 3: " << sum1 << endl;

    for (i=5; i < 1000; i+=5) {
        sum2 += i;
    }

    cout << "multiples of 5: " << sum2 << endl;

    cout << "sum: " << (sum1 + sum2) << endl;
*/

    unsigned int i = 0;
    unsigned long sum  = 0;
    for (i = 0; i < 1000; i++) {
        if (i %3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
