#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int max = 0;
    int maxIdx = 0;
    int count = 0;
    double test = 0;

    for (int start = 2; start < 1000000; start++) {
        test = start;
        count = 0;

        while (test > 1) {
            if (start == 13) {
                cout << test << " ";
            }
            if (fmod(test, 2) == 0) {
                test /= 2;
            } else {
                test = test*3 + 1;
            }
            count++;
        }

        if (count > max || start == 13) {
            max = count;
            maxIdx = start;
            cout << maxIdx << " length: " << count << endl;
        }
    }

    cout << maxIdx << endl;
    return 0;
}
