#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned long sum = 0;

    unsigned int a = 1;
    unsigned int b = 1;
    unsigned int fib = a + b;

    while (fib < 4000000) {
        cout << fib << " ";
        if (fib % 2 == 0) {
            sum += fib;
        }

        a = b;
        b = fib;
        fib = a + b;
    }
    cout << endl;

    cout << "sum: " << sum << endl;
    return 0;
}
