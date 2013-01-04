#include <iostream>

using namespace std;

int main()
{
    int sumsqr = 0;
    int sqrsum = 0;

    for (int i = 0; i < 101 ; i++) {
        sumsqr += i*i;
        sqrsum += i;
    }

    sqrsum = sqrsum * sqrsum;

    cout << "Difference: " << sqrsum - sumsqr << endl;
    return 0;
}
